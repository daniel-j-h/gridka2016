#include <cstdio>
#include <memory>
#include <string>
#include <utility>
#include <exception>
#include <system_error>


struct File {
  File(const std::string& path)
	  : handle{fopen(path.c_str(), "r+"), &fclose}
	{
		//fp = std::fopen(path.c_str(), "r+");
		if (!handle.get())
      throw std::system_error{errno, std::system_category()};
  }

	std::unique_ptr<FILE, decltype(&fclose)> handle;

	/*
  ~File() {
    if (!std::fclose(fp))
      std::terminate();
  }

	File(File&&) = default;
	File& operator=(File&&) = default;
	File(const File&) = delete;
	File& operator=(const File&) = delete;
	
	std::FILE* fp;
	*/
};


int main() {
  File readme{"README.md"};
  File steal{std::move(readme)};
}
