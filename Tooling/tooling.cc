#include <iostream>
#include <iterator>
#include <vector>

#include "boost/filesystem.hpp"

int main() {
  std::vector<int> v{2, 4, 6};

  for (int it : v)
    std::cout << it << std::endl;
}
