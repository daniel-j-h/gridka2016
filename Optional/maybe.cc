#include <string>
#include <iostream>

#include <boost/optional.hpp>

template <typename T>
using Maybe = boost::optional<T>;


struct Response { double result; };


Maybe<Response> divideRPC(double num, double denom) {
	if (denom != 0) {
		return Response{num / denom};
	} else {
		return {}; // or: boost::none
	}
}


int main() {
  auto res0 = divideRPC(4, 1);
  if (res0) {
	  std::cout << res0->result << std::endl;
  }

  auto res1 = divideRPC(1, 0);
  if (res1) {
	  std::cout << res1->result << std::endl;
  }
}
