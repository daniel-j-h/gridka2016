#include <algorithm>
#include <functional>
#include <iterator>
#include <list>
#include <vector>


int main() {
  std::vector<int> v{1, 3, 5};
  std::list<int> l{2, 4, 6};

  std::sort(v.begin(), v.end(), std::greater<>{});

  // This does not compile: 
  //std::sort(l.begin(), l.end(), [](const auto& a, const auto& b){ return a>b;});

  l.sort(std::greater<>{});
}
