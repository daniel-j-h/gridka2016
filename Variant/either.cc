#include <string>
#include <iostream>

#include <boost/variant.hpp>

template <typename Left, typename Right>
using Either = boost::variant<Left, Right>;


struct Response { double result; };
struct Error { std::string what; };

struct Visitor {
	void operator()(Error e) {
		std::cerr << "Error: " << e.what << std::endl;
	}
	void operator()(Response r) {
		std::cout << "Result: " << r.result << std::endl;
	}
	typedef void result_type;
};

Either<Error, Response> divideRPC(double num, double denom) {
	if (denom != 0) {
		return Response{num / denom};
	} else {
		return Error{"Division by zero!"};
	}
}

int main() {
	Visitor myVisitor;
	
  auto res0 = divideRPC(1, 2);
  apply_visitor(myVisitor, res0);


  auto res1 = divideRPC(1, 0);
  apply_visitor(myVisitor, res1);

}
