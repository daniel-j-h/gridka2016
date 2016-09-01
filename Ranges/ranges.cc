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
  auto out = std::ostream_iterator<std::size_t>(std::cout, " ");

  std::vector<std::string> args{argv, argv + argc};

  // Classical: 
  for (auto& arg : args) {
	  std::cout << arg << std::endl;
  }
  std::reverse(args.begin(), args.end());
  for (auto& arg : args) {
	  std::cout << arg.length() << std::endl;
  }
  // Fix vector again: 
  std::reverse(args.begin(), args.end());

  // Boost ranges: 
  boost::range::copy(args | reversed | transformed(len), out);
}
