#include <iostream>
#include <utility>
#include <memory>
#include <string>
#include <exception>

using Chunk = std::string;


struct Compressor {
  virtual ~Compressor() = default;
  virtual Chunk compress(const Chunk& chunk) const = 0;
};


struct NopCompressor final : Compressor {
  Chunk compress(const Chunk& chunk) const override { return chunk; }
};

struct XzCompressor final : Compressor {
  Chunk compress(const Chunk& chunk) const override { return "<xz: " + chunk + ">"; }
};

std::unique_ptr<Compressor> makeCompressorFor(std::string name) {
	if (name == "nop") {
		return std::make_unique<NopCompressor>();
	}
	if (name == "xz") {
		return std::make_unique<XzCompressor>();
	}
	throw std::runtime_error(std::string("No such compressor: ") + name);
}

Chunk compressChunk(const Compressor& comp, const Chunk& input) {
	return comp.compress(input);
}

int main() {
  const std::string input{"Hello World"};
  std::cout << input << std::endl;

  //std::shared_ptr<Compressor> comp = makeCompressorFor("xz");
  auto comp = makeCompressorFor("xz");

  auto output  = comp->compress("foo");
  std::cout << output << std::endl;

  auto output2 = compressChunk(*comp.get(), "foo");
  std::cout << output2 << std::endl;
}
