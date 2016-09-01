### Ranges

Boost.Range, `std2`

### Tasks

`ranges.cc`

- [ ] Print the command line arguments to stdout
- [ ] Reverse the arguments, then print their length to stdout
- [ ] Now do the same using a range copy and adaptors

- [ ] Create a range from two iterators using `make_iterator_range`
- [ ] Go the other way around again: from a range to two iterators

- Have a look at `make_function_input_iterator` / `make_function_output_iterator`, how can these building blocks help here?

`adjacent.cc`

- [ ] Implement `forEachAdjacent` working on iterators / ranges, calling a function on items `(x0, x1), (x1, x2), (x2, x3), ..`
- [ ] Make it work with both iterators and ranges but keep it as generic as possible

Note: you can use `adjacent_find` always returning `false` to let it run through all elements
