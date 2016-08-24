#include <memory>
#include <vector>
#include <array>
#include <new>


int* makeIntArrayWith10Items() {
  return new int[10];
}


char* makeString(int size) {
  return new char[size];
}


std::vector<char>* loadImageFromDisk() {
  return new std::vector<char>(480 * 640);
}


void saveImageToDisk(const std::vector<char>* img) {
  // write img to disk
}


int main() {
  int* is = makeIntArrayWith10Items();

  char* cs = makeString(10);

  std::vector<char>* img = loadImageFromDisk();
  saveImageToDisk(img);
}
