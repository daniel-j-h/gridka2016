#include <cstdio>
#include <memory>
#include <string>
#include <utility>
#include <exception>
#include <system_error>


struct File {
  File(const std::string& path) {
    fp = std::fopen(path.c_str(), "r+");
    if (!fp)
      throw std::system_error{errno, std::system_category()};
  }

  ~File() {
    if (!std::fclose(fp))
      std::terminate();
  }

  std::FILE* fp;
};


int main() {
  File readme{"README.md"};
  File steal{std::move(readme)};
}
