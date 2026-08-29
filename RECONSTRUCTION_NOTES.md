# Reconstructed source - how much to trust it

These are NOT the original files. Heaven ships as a stripped Rust release binary, and you don't
get real source back out of stripped Rust. Everything in src/ is reconstruction.

## Fidelity tags
- `[exact]`  field/variant names lifted exactly from serde metadata in .rdata.
- `[STRINGS]`  literals pulled exactly from the binary.
- `[IMPORTS]`  API usage proven by the PE import table.
- `[RE]`  function body rebuilt from disasm + behaviour. approximate, treat with suspicion.

## What the evidence was
- serde `struct X with N elements` / `missing field` metadata gave exact field names
- internal `src/....rs` module paths gave the exact module tree
- PE imports/exports, the string table, the boot log, and the license/session artifacts filled in the rest

So: names and strings are solid. Anything tagged [RE] is my best read of the control flow and
could be wrong in the details.
