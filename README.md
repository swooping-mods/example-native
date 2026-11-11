# Native Diagnostic Example

<img src="media/icon.png" alt="Native Diagnostic Example icon" width="128" height="128">

Developer example: checks the attached IL2CPP thread at startup.

## Install

Install [Moon Sweepers Mod Loader](https://github.com/swooping-mods/moon-sweepers-mod-loader) first.

This is a source-only diagnostic example for developers. It has no player download.

## Compatibility

Version 0.1.0. Targets the pinned Steam Windows x64 IL2CPP build of Moon Sweepers (Steam app 5335510). On Linux, the game runs through Proton. Experimental: back up saves before using save-affecting mods.

## Build

Run `python3 build.py --check` to verify source hashes, then `python3 build.py` to write a build under `.local/build/`. Requires installed Clang, lld-link and llvm-dlltool.

## Credits

See [CREDITS.txt](CREDITS.txt) and [third-party notices](vendored/THIRD_PARTY_NOTICES.md).
