### Ownership

Ownership, Borrowing, Lifetimes.

Note: have a look at `-fno-elide-constructors` to spare you some headaches in debugging special member invocations.
Also what is `-Wdeprecated` good for?


### Tasks

`pointers.cc`

- [ ] What are the problems here? Fix as many issues as you can think of.

`ownership.cc`

- [x] Write out the function declaration signatures

`interfaces.cc`

- [x] Implement `makeCompressorFor(string name)` function returning the corresponding compressor
- [x] Implement the call site and print the result
- [x] Write a function that takes an arbitrary compressor and calls `compress` on it
- [x] When are compressors getting destroyed? Who is responsible? How can multiple callers hold on to a compressor?

`special.cc`

- [x] How can you copy and move a type? What do these semantics mean? When makes a move-only type sense?
- [x] Implement a type that you can copy. Write the call site first.
- [x] Implement a type that you can only move but not copy. Write the call site first.

`raii.cc`

- [x] Read the docs for `std::lock_guard` and `BasicLockable` and `Mutex`
- [x] When is the mutex getting unlocked? Can the user influence this?
- [x] Implement a dummy `NoOpMutex` and a `LogMutex`
- [x] What is the benefit of RAII here compared to `lock` / `unlock` calls?

`zero.cc`

- [x] Have a look at the special members matrix and figure out what happens
- [x] Try compiling with Clang's `-Wdeprecated` flag
- [x] How can we fix this ownership issue? What kind of ownership do we want for `File`?
