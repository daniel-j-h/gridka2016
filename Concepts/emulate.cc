#include <algorithm>
#include <functional>
#include <iterator>
#include <list>
#include <vector>
#include <type_traits>


template <typename Iter, typename Cmp>
void checkedSort(Iter first, Iter last, Cmp cmp) {
  using ItCatTag = typename std::iterator_traits<Iter>::iterator_category;



  std::sort(first, last, cmp);
}


int main() {
  std::list<int> l{2, 4, 6};

  checkedSort(begin(l), end(l), std::greater<>{});
}
