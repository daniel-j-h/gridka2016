#include <vector>
#include <numeric>

int fn(int n) {
  std::vector<int> v(n);
  std::iota(begin(v), end(v), 0);
  return v[n];
}

int gn(int n) {
  return 1 << n;
}

int main(int argc, char** /*argv*/) {
  fn(argc);
  gn(argc);
}
