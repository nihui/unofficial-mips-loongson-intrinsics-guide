import pathlib

from main import EXTENSIONS, ROOT, parse_header


def main() -> int:
    docs = "\n".join(path.read_text() for path in (ROOT / "docs").glob("**/*.md"))
    missing = []
    issues = []
    total = 0
    for ext in EXTENSIONS:
        entries = parse_header(ext)
        total += len(entries)
        for entry in entries:
            if f"## {entry.signature}" not in docs:
                missing.append(entry.signature)

    for item in missing:
        print("Missing:", item)
    for marker in ["operation_named_by_mnemonic", "Apply the operation encoded"]:
        if marker in docs:
            issues.append(f"Found generic operation marker: {marker}")
    for issue in issues:
        print("Issue:", issue)

    print(f"Checked {total} intrinsics.")
    return 1 if missing or issues else 0


if __name__ == "__main__":
    raise SystemExit(main())
