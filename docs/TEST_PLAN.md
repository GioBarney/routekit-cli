# Test Plan - RouteKit CLI

One row per test. Fill in "Actual" and "Pass?" after running it.

## Feature 1 - Machine and Warehouse Inventory

| # | What I'm testing | Input | Expected result | Actual | Pass? |
|---|------------------|-------|-----------------|--------|-------|
| 1 |                  |       |                 |        |       |

## Feature 2 - Service Log

| # | What I'm testing | Input | Expected result | Actual | Pass? |
|---|------------------|-------|-----------------|--------|-------|
| 1 |                  |       |                 |        |       |

## Feature 3 - Pull-Sheet and Save/Load

| # | What I'm testing | Input | Expected result | Actual | Pass? |
|---|------------------|-------|-----------------|--------|-------|
| 1 |                  |       |                 |        |       |

## Edge cases to cover

- Empty lists (no machines, no products yet)
- Bad input (letters where a number goes, negative numbers, 0)
- Array growth (adding one more item than the array currently holds)
- Save file missing, empty, or damaged
- Close and reopen: does all data come back the same?
- Memory: every `new` has a matching `delete` / `delete[]`
