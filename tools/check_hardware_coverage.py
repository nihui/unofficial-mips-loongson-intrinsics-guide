#!/usr/bin/env python3

from __future__ import annotations

import argparse
import json
import pathlib
import sys
from collections import Counter


ROOT = pathlib.Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))

import main  # noqa: E402


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description="Check that hardware probe results cover every documented intrinsic."
    )
    parser.add_argument(
        "--results",
        type=pathlib.Path,
        default=ROOT / "data" / "hardware_probe_results.json",
        help="Hardware probe JSON produced by tools/collect_probe_results.py.",
    )
    return parser.parse_args()


def documented_names() -> list[str]:
    names: list[str] = []
    for ext in main.EXTENSIONS:
        names.extend(entry.name for entry in main.parse_header(ext))
    return names


def main_cli() -> int:
    args = parse_args()
    if not args.results.exists():
        raise SystemExit(f"missing hardware results: {args.results}")

    data = json.loads(args.results.read_text())
    observed = Counter(
        item["name"] for item in data.get("intrinsics", []) if isinstance(item.get("name"), str)
    )
    documented = Counter(documented_names())

    missing = sorted(name for name in documented if observed[name] == 0)
    extra = sorted(name for name in observed if documented[name] == 0)
    duplicate_docs = sorted(name for name, count in documented.items() if count != 1)

    if missing or extra or duplicate_docs:
        if missing:
            print("Missing hardware records:")
            for name in missing:
                print(f"  {name}")
        if extra:
            print("Unexpected hardware records:")
            for name in extra:
                print(f"  {name}")
        if duplicate_docs:
            print("Duplicate documented names:")
            for name in duplicate_docs:
                print(f"  {name}: {documented[name]}")
        return 1

    print(
        f"Hardware records cover {len(documented)} documented intrinsics "
        f"with {sum(observed.values())} total observations."
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main_cli())
