#include <cstddef>
#include <iostream>
#include <iterator>
#include <vector>
#include <string>

#include <boost/range/algorithm/copy.hpp>
#include <boost/range/adaptors.hpp>
#include <boost/range.hpp>


int main(int argc, char** argv) {
  using namespace boost::adaptors;

  auto len = [](const auto& v) { return v.size(); };
  auto out = std::ostream_iterator<std::string>(std::cout, " ");


  std::vector<std::string> args{argv, argv + argc};


}
