#include <algorithm>
#include <functional>
#include <iterator>
#include <list>
#include <vector>
#include <type_traits>

template <typename Iter>
struct is_random_access_iterator : std::is_base_of<
	std::random_access_iterator_tag,
	typename std::iterator_traits<Iter>::iterator_category
	> {};

template <typename Iter, typename Cmp>
void checkedSort(Iter first, Iter last, Cmp cmp) {
	static_assert(is_random_access_iterator<Iter>(), "Need random access iterator for sorting!");

  using ItCatTag = typename std::iterator_traits<Iter>::iterator_category;

  std::sort(first, last, cmp);
}


int main() {
  std::list<int> l{2, 4, 6};

  checkedSort(begin(l), end(l), std::greater<>{});
}
