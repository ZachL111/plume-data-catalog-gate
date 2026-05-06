# Plume Data Catalog Gate Walkthrough

I use this file as a small checklist before changing the C++ implementation.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | schema drift | 230 | ship |
| stress | lineage depth | 237 | ship |
| edge | partition skew | 242 | ship |
| recovery | quality gap | 259 | ship |
| stale | schema drift | 216 | ship |

Start with `recovery` and `stale`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

The next useful expansion would be a malformed fixture around lineage depth and quality gap.
