#include <iostream>
#include <utility>
#include <memory>
#include <string>

using Chunk = std::string;


struct Compressor {
  virtual ~Compressor() = default;
  virtual Chunk compress(const Chunk& chunk) = 0;
};


struct NopCompressor final : Compressor {
  Chunk compress(const Chunk& chunk) override { return chunk; }
};

struct XzCompressor final : Compressor {
  Chunk compress(const Chunk& chunk) override { return "<xz: " + chunk + ">"; }
};


// makeCompressorFor(const std::string& name)




int main() {
  const std::string input{"Hello World"};


  std::cout << input << std::endl;
}
