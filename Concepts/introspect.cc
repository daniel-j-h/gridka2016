#include <algorithm>
#include <functional>
#include <iterator>
#include <list>
#include <vector>
#include <type_traits>


#define requires_(...) typename std::enable_if<(__VA_ARGS__), int>::type = 0


template <typename T, typename = void>
struct has_sort_mem_fn : std::false_type {};

template <typename T>
struct has_sort_mem_fn<T, decltype((void)std::declval<T>().sort())> : std::true_type {};




int main() {
  std::vector<int> v{1, 3, 5};
  std::list<int> l{2, 4, 6};

  introspectingSort(v);
  introspectingSort(l);
}
