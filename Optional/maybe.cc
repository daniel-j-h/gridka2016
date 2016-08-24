#include <string>
#include <iostream>

#include <boost/optional.hpp>

template <typename T>
using Maybe = boost::optional<T>;


struct Response { double result; };


Maybe<Response> divideRPC(double num, double denom) {


}


int main() {
  auto res0 = divideRPC(4, 1);


  auto res1 = divideRPC(1, 0);


}
