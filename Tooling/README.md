### Tooling

Buildsystem, LLVM-based tools, sanitizers.

### Tasks

`tooling.cc`

- [ ] use `clang-format` to reformat the source
- [ ] build a `compile_commands.json` compilation database
- [ ] use `clang-tidy`'s modernize checks

- [ ] include `boost/filesystem.hpp`
- [ ] find Boost package and add include directory and link in Boost library

`sanitizer.cc`

- [ ] use the sanitizers (`-fsanitize=`) to find potential issues
