#include <memory>
#include <vector>
#include <array>
#include <new>


std::array<int, 10> makeIntArrayWith10Items() {
	return std::array<int, 10>();
}


std::vector<char> makeString(int size) {
	return std::vector<char>(size);
}


std::vector<char> loadImageFromDisk() {
  return std::vector<char>(480 * 640);
}


void saveImageToDisk(const std::vector<char>& /*img*/) {
  // write img to disk
}


int main() {
  auto is = makeIntArrayWith10Items();

  auto cs = makeString(10);

  auto img = loadImageFromDisk();
  saveImageToDisk(img);
}
