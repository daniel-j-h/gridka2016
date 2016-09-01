#include <iostream>
#include <vector>
#include <iterator>

int main() { 
  std::vector<int> v{2, 4, 6};

  for (std::vector<int>::const_iterator it = v.cbegin(), last = v.cend(); it != last; ++it) std::cout << *it << std::endl;
}
