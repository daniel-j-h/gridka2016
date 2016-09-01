#include <vector>
#include <iostream>

#include <boost/range/iterator_range.hpp>
#include <boost/range/algorithm/adjacent_find.hpp>

template<class SinglePassRange, class BinaryFunction>
BinaryFunction forEachAdjacent(const SinglePassRange& rng, BinaryFunction pred) {
	boost::adjacent_find(rng, [&pred](auto l, auto r){pred(l,r); return false;});
	return pred;
}

template<class Iter, class BinaryFunction>
BinaryFunction forEachAdjacent(Iter first, Iter last, BinaryFunction pred) {
	return forEachAdjacent(boost::make_iterator_range(first, last), pred);
}

int main() {
  std::vector<int> v{1,2,3,4,5};
  forEachAdjacent(std::begin(v), std::end(v), [](auto l, auto r) {
    std::cout << '(' << l << ',' << r << ')' << '\n';
  });
  forEachAdjacent(v, [](auto l, auto r) {
    std::cout << '(' << l << ',' << r << ')' << '\n';
  });

  // Expected output: (1,2) (2,3) (3,4) (4,5)
}
