#!/usr/bin/env python3

import pathlib
import sys


ROOT = pathlib.Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))

import main  # noqa: E402


if __name__ == "__main__":
    generated = main.generate()
    total = sum(len(items) for items in generated.values())
    for ext in main.EXTENSIONS:
        print(f"{ext.name}: {len(generated[ext.key])}")
    print(f"Total: {total}")
