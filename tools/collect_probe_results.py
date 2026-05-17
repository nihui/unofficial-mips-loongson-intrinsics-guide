#!/usr/bin/env python3

from __future__ import annotations

import argparse
import json
import pathlib
import re
from typing import Any


LOG_NAME_RE = re.compile(r"^out_(?P<extension>.+)\.txt$")
ENTRY_RE = re.compile(r"^(?P<name>[A-Za-z_][A-Za-z0-9_]*)$")
VALUE_RE = re.compile(r"^\s*(?P<key>arg\d+|out)(?P<sep>[:=])\s*(?P<value>.*)$")
BYTE_RE = re.compile(r"^[0-9A-Fa-f]{2}$")
SCALAR_RE = re.compile(r"^[+-]?\d+$")


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description="Collect hardware probe logs into a JSON result file."
    )
    parser.add_argument(
        "--input-dir",
        required=True,
        type=pathlib.Path,
        help="Directory containing out_*.txt hardware probe logs.",
    )
    parser.add_argument(
        "--output",
        required=True,
        type=pathlib.Path,
        help="JSON file to write.",
    )
    return parser.parse_args()


def extension_from_path(path: pathlib.Path) -> str:
    match = LOG_NAME_RE.match(path.name)
    if not match:
        raise ValueError(f"cannot infer extension from filename: {path.name}")
    extension = match.group("extension")
    if extension.startswith("special_"):
        return extension[len("special_") :]
    if extension.endswith("_special"):
        return extension[: -len("_special")]
    return extension


def parse_observed_value(separator: str, value: str) -> dict[str, Any]:
    if separator == ":":
        bytes_out = [part.lower() for part in value.split()]
        if not bytes_out:
            raise ValueError("empty byte-vector value")
        invalid = [part for part in bytes_out if not BYTE_RE.fullmatch(part)]
        if invalid:
            raise ValueError(f"invalid byte value(s): {', '.join(invalid)}")
        return {"kind": "bytes", "value": bytes_out}

    if not SCALAR_RE.fullmatch(value):
        raise ValueError(f"invalid scalar value: {value!r}")
    return {"kind": "scalar", "value": int(value)}


def finish_entry(
    entries: list[dict[str, Any]],
    extension: str,
    source: pathlib.Path,
    current: dict[str, Any] | None,
) -> None:
    if current is None:
        return
    args_by_index = current.pop("_args")
    current["args"] = [args_by_index[key] for key in sorted(args_by_index)]
    current["source"] = source.name
    current["extension"] = extension
    entries.append(current)


def parse_log(path: pathlib.Path) -> list[dict[str, Any]]:
    extension = extension_from_path(path)
    entries: list[dict[str, Any]] = []
    current: dict[str, Any] | None = None

    with path.open("r", encoding="utf-8") as handle:
        for line_number, raw_line in enumerate(handle, start=1):
            line = raw_line.rstrip("\n")
            if not line.strip():
                continue

            entry_match = ENTRY_RE.fullmatch(line)
            if entry_match:
                finish_entry(entries, extension, path, current)
                current = {
                    "name": entry_match.group("name"),
                    "_args": {},
                    "out": None,
                }
                continue

            value_match = VALUE_RE.fullmatch(line)
            if not value_match or current is None:
                raise ValueError(f"{path}:{line_number}: cannot parse line: {line!r}")

            key = value_match.group("key")
            try:
                observed = parse_observed_value(
                    value_match.group("sep"), value_match.group("value")
                )
            except ValueError as exc:
                raise ValueError(f"{path}:{line_number}: {exc}") from exc

            if key.startswith("arg"):
                current["_args"][int(key[3:])] = {"name": key, **observed}
            else:
                current["out"] = observed

    finish_entry(entries, extension, path, current)
    return entries


def collect(input_dir: pathlib.Path) -> dict[str, Any]:
    paths = sorted(path for path in input_dir.glob("out_*.txt") if path.is_file())
    results: list[dict[str, Any]] = []
    by_extension: dict[str, int] = {}

    for path in paths:
        entries = parse_log(path)
        results.extend(entries)
        extension = extension_from_path(path)
        by_extension[extension] = by_extension.get(extension, 0) + len(entries)

    return {
        "summary": {
            "files": len(paths),
            "intrinsics": len(results),
            "by_extension": dict(sorted(by_extension.items())),
        },
        "intrinsics": results,
    }


def main() -> int:
    args = parse_args()
    if not args.input_dir.is_dir():
        raise SystemExit(f"input directory does not exist: {args.input_dir}")

    data = collect(args.input_dir)
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(json.dumps(data, indent=2, sort_keys=True) + "\n")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
