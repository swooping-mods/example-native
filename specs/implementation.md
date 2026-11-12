# Native Diagnostic Example: behavior and implementation

Describes the retained payload **0.1.0**. The behavior prose describes the retained payload; current candidate source and metadata are identified below. Gameplay qualification is a separate requirement.


<!-- source-only-sync -->
## Current source candidate

Source version **0.1.0** is saved from workshop revision `ca32bbf79ce0840d5166a232bdb3a9fdcd761254`. The retained installable payload remains **0.1.0** with its original bytes. This source update does not rebuild or requalify that payload. The current source and metadata define the candidate; gameplay, rendered behavior and co-op remain unqualified for rebuilt bytes.

The authored behavior and lifecycle descriptions below are retained from the published payload. They are not new qualification evidence for the source candidate. The integration table below follows the current candidate metadata.
<!-- /source-only-sync -->

## Behavior

A source-only read-only diagnostic entry point demonstrating MoonLab_ModStart. It checks the supplied domain and the current attached IL2CPP thread through il2cpp_thread_current. It does not register a player feature, controls, shop offer or saved object. Its small translation unit shows the minimal native module boundary rather than a gameplay implementation.

## State and lifecycle

Only the startup return value is produced. There is no installable player package, ownership ledger or world mutation to persist.

## Integration and configuration

No additional feature-mod runtime dependency is declared. Included shared headers are source reuse, not extra DLL dependencies.

The [module metadata](../source/mods/example-native/mod.json) owns the version and declared integration contract. Native modules start at `MoonLab_ModStart`. Game/Unity integrations target the pinned Steam Windows x64 IL2CPP build.

## Implementation sources

- [mod.c](../source/mods/example-native/mod.c)

## Verification boundary

Compilation and entry-point inspection are developer checks; this example is not a playable mod or a comprehensive runtime conformance test.

`python3 build.py --check` verifies the exported source hashes. It does not execute the mod or qualify the behaviors above. Installation and independent build prerequisites are in the [README](../README.md).
