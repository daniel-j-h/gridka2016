#include <string>
#include <iostream>

#include <boost/variant.hpp>

template <typename Left, typename Right>
using Either = boost::variant<Left, Right>;


struct Response { double result; };
struct Error { std::string what; };


Either<Error, Response> divideRPC(double num, double denom) {


}


int main() {
  auto res0 = divideRPC(1, 2);



  auto res1 = divideRPC(1, 0);


}
