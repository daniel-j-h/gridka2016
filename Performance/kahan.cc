#include <iterator>

template <typename Iter>
typename std::iterator_traits<Iter>::value_type KahanSum(Iter first, Iter last) {
  using T = typename std::iterator_traits<Iter>::value_type;

  T sum(0);
  T compensation(0);

  for (; first != last; ++first) {
    compensation += *first;
    const T next(sum + compensation);
    compensation += sum - next;
    sum = next;
  }

  return sum;
}


template double KahanSum(double* first, double* last);


int main(){}
