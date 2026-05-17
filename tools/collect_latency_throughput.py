#!/usr/bin/env python3

from __future__ import annotations

import argparse
import csv
import math
import pathlib
from collections import defaultdict
from statistics import median


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description="Collect raw latency/throughput benchmark rows into documentation CSV data."
    )
    parser.add_argument("--cpu", required=True, help="CPU name, for example 3A4000.")
    parser.add_argument("--uarch", required=True, help="Microarchitecture name.")
    parser.add_argument("--output", required=True, type=pathlib.Path)
    parser.add_argument("inputs", nargs="+", type=pathlib.Path)
    return parser.parse_args()


def rounded(value: float) -> str:
    if value < 0:
        return ""
    if value and abs((value - round(value)) / value) < 0.02:
        return str(int(round(value)))
    return f"{value:.2f}"


def formatted_latency(values: list[float]) -> str:
    useful = sorted({round(value, 2) for value in values if value >= 0})
    result: list[str] = []
    for value in useful:
        text = rounded(value)
        if text not in result:
            result.append(text)
    return "/".join(result)


def formatted_throughput(cpi: float) -> tuple[str, str]:
    if cpi <= 0:
        return "", ""
    ipc = 1.0 / cpi
    ipc_text = rounded(ipc)
    cpi_text = rounded(cpi)
    if ipc < 1.0 and cpi_text:
        ipc_text = f"{ipc_text}(1/{cpi_text})"
    return ipc_text, cpi_text


def read_inputs(paths: list[pathlib.Path]) -> dict[tuple[str, str, str], dict[str, object]]:
    rows: dict[tuple[str, str, str], dict[str, object]] = {}
    throughput_samples: dict[tuple[str, str, str], list[float]] = defaultdict(list)

    for path in paths:
        with path.open(newline="", encoding="utf-8") as handle:
            reader = csv.DictReader(line for line in handle if not line.startswith("perf_event_open"))
            for row in reader:
                key = (row["intrinsic"], row["instruction"], row["extension"])
                entry = rows.setdefault(
                    key,
                    {
                        "latency": [],
                        "notes": set(),
                        "invalid_notes": set(),
                        "valid_count": 0,
                    },
                )
                try:
                    cycles = float(row["cycles"])
                except ValueError:
                    continue
                if not math.isfinite(cycles):
                    continue
                note = row.get("notes", "")
                if cycles < 0:
                    if note:
                        entry["invalid_notes"].add(note)
                    continue
                entry["valid_count"] += 1
                if note:
                    entry["notes"].add(note)
                if row["kind"] == "latency":
                    entry["latency"].append(cycles)
                elif row["kind"] == "throughput":
                    throughput_samples[key].append(cycles)

    for key, samples in throughput_samples.items():
        if samples:
            rows[key]["throughput_cpi"] = median(samples)
    return rows


def main() -> int:
    args = parse_args()
    rows = read_inputs(args.inputs)
    args.output.parent.mkdir(parents=True, exist_ok=True)
    with args.output.open("w", newline="", encoding="utf-8") as handle:
        fieldnames = [
            "cpu",
            "uarch",
            "intrinsic",
            "instruction",
            "extension",
            "latency",
            "throughput(ipc)",
            "throughput(cpi)",
            "notes",
        ]
        writer = csv.DictWriter(handle, fieldnames=fieldnames)
        writer.writeheader()
        for intrinsic, instruction, extension in sorted(rows):
            row = rows[(intrinsic, instruction, extension)]
            cpi = float(row.get("throughput_cpi", -1.0))
            ipc_text, cpi_text = formatted_throughput(cpi)
            notes = set(row["notes"])
            invalid_notes = set(row.get("invalid_notes", set()))
            if invalid_notes:
                if row.get("valid_count", 0):
                    notes.update(f"partial {note}" for note in invalid_notes)
                else:
                    notes.update(invalid_notes)
            writer.writerow(
                {
                    "cpu": args.cpu,
                    "uarch": args.uarch,
                    "intrinsic": intrinsic,
                    "instruction": instruction,
                    "extension": extension,
                    "latency": formatted_latency(row["latency"]),
                    "throughput(ipc)": ipc_text,
                    "throughput(cpi)": cpi_text,
                    "notes": "/".join(sorted(notes)),
                }
            )
    print(f"wrote {args.output} ({len(rows)} rows)")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
