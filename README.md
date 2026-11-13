# RouteKit CLI

A local C++ terminal program for running a vending route: warehouse inventory, machine repair history, and restock lists in one place.

COSC-1337 Major Project 4 (AI-Assisted Build Project), South Texas College, Fall 2026.

## Who it's for

Built for me and my wife to use before we load the van for a route and right after we get back.

## Features

1. **Machine and Warehouse Inventory Tracker** - add, view, and update vending machines and products; tracks slot capacities, current stock, and how many items each machine is missing.
2. **Per-Machine Service Log** - log hardware issues, replaced parts, and repair dates for each machine.
3. **Truck Pull-Sheet Generator + Save/Load** - compares empty machine slots against warehouse stock and prints a packing list sorted by what needs filling most; all data saves to a local text file.

Stretch goal: CSV import of Nayax sales reports and a Sam's Club price-tracker import.

## How to build and run

TODO: fill in once the first version compiles (compiler, command, how to start it).

## Screenshot

TODO: add a screenshot of the program running (required).

## Project docs

- [Proposal](docs/ProjectProposal.pdf)
- [AI Log](docs/AI_LOG.md)
- [Test Plan](docs/TEST_PLAN.md)
- [Checkpoints](docs/CHECKPOINTS.md)

## Folder layout

- `src/` - C++ source code
- `data/` - save files the program reads and writes
- `tests/` - test inputs and notes
- `docs/` - proposal, AI log, test plan, checkpoints
