# Review Journal

The repository goal stays the same: build a C++ toolkit that studies catalog behavior through log and snapshot fixtures, with replay consistency checks and synthetic fixtures only. This note explains the added review angle.

The local checks classify each case as `ship`, `watch`, or `hold`. That gives the project a small review vocabulary that matches its data engineering focus without claiming live deployment or external usage.

## Cases

- `baseline`: `schema drift`, score 230, lane `ship`
- `stress`: `lineage depth`, score 237, lane `ship`
- `edge`: `partition skew`, score 242, lane `ship`
- `recovery`: `quality gap`, score 259, lane `ship`
- `stale`: `schema drift`, score 216, lane `ship`

## Note

This file is intentionally plain so the fixture remains the source of truth.
