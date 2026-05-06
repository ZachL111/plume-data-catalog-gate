# plume-data-catalog-gate

`plume-data-catalog-gate` is a compact C++ repository for data engineering, centered on this goal: Build a C++ toolkit that studies catalog behavior through log and snapshot fixtures, with replay consistency checks and synthetic fixtures only.

## Project Rationale

The point is to make a small domain rule concrete enough that a reader can change it and immediately see what broke.

## Plume Data Catalog Gate Review Notes

For a quick review, compare `quality gap` with `schema drift` before reading the middle cases.

## Feature Set

- `fixtures/domain_review.csv` adds cases for schema drift and lineage depth.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/plume-data-catalog-walkthrough.md` walks through the case spread.
- The C++ code includes a review path for `quality gap` and `schema drift`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Architecture

The core code exposes a scoring path and the added review layer uses `signal`, `slack`, `drag`, and `confidence`. The domain terms are `schema drift`, `lineage depth`, `partition skew`, and `quality gap`.

The added C++ path is deliberately direct, with fixtures doing most of the explaining.

## Usage

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Test Command

The same command runs the local verification path. The highest-scoring domain case is `recovery` at 259, which lands in `ship`. The most cautious case is `stale` at 216, which lands in `ship`.

## Next Improvements

This remains a local project with deterministic fixtures. It does not depend on credentials, hosted services, or live data. Future work should add richer malformed inputs before widening the public API.
