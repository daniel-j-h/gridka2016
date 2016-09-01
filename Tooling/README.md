### Tooling

Buildsystem, LLVM-based tools, sanitizers.

### Tasks

`tooling.cc`

- [x] build the binary using CMake
- [x] use the `Makefile` generator and then try the one for `Ninja`

- [x] use `clang-format` to reformat the source
- [x] build a `compile_commands.json` compilation database
- [x] use `clang-tidy`'s modernize checks

- [x] include `boost/filesystem.hpp`
- [x] find Boost package and add include directory and link in Boost library

`sanitizer.cc`

- [x] use the sanitizers (`-fsanitize=`) to find potential issues
