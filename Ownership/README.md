### Ownership

Ownership, Borrowing, Lifetimes.

### Tasks

`pointers.cc`

- [ ] What are the problems here? Fix as many issues as you can think of.

`ownership.cc`

- [ ] Write out the function declaration signatures

`interfaces.cc`

- [ ] Implement `makeCompressorFor(string name)` function returning the corresponding compressor
- [ ] Implement the call site and print the result
- [ ] Write a function that takes an arbitrary compressor and calls `compress` on it
- [ ] When are compressors getting destroyed? Who is responsible? How can multiple callers hold on to a compressor?

`special.cc`

- [ ] How can you copy and move a type? What do these semantics mean? When makes a move-only type sense?
- [ ] Implement a type that you can copy. Write the call site first.
- [ ] Implement a type that you can only move but not copy. Write the call site first.

`zero.cc`

- [ ] Have a look at the special members matrix and figure out what happens
- [ ] Try compiling with Clang's `-Wdeprecated` flag
- [ ] How can we fix this ownership issue? What kind of ownership do we want for `File`?
