#include <vector>
#include <iostream>

#include <boost/range/iterator_range.hpp>
#include <boost/range/algorithm/adjacent_find.hpp>









int main() {
  std::vector<int> v{1,2,3,4,5};

  forEachAdjacent(std::begin(v), std::end(v), [](auto l, auto r) {
    std::cout << '(' << l << ',' << r << ')' << '\n';
  });

  // Expected output: (1,2) (2,3) (3,4) (4,5)
}
