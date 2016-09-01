#include <functional>
#include <iostream>
#include <numeric>
#include <algorithm>
#include <iterator>


int main(int argc, char** /*argv*/) {
  std::vector<double> v(argc);

  std::function<double (double, double)> fn = [](auto acc, auto v) { return acc + v; };

  auto x = std::accumulate(begin(v), end(v), 0., fn);

  std::cout << x << std::endl;
}
