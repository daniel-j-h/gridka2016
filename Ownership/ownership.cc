#include <vector>
#include <utility>

typedef Image std::vector<char>;

// loadImageFromDisk
Image loadImageFromDisk() {
	return std::vector<char>(640 * 480);
}

// saveImageToDisk
void saveImageToDisk(const Image& imgData) {
	
}

// setAllPixelsToBlack
/*
void setAllPixelsToBlack(Image& imgData) {
	
}
*/
Image setAllPixelsToBlack(Image imgData) {
	
}

int main() {
	auto img = loadImageFromDisk();
	auto img2 = setAllPixelsToBlack(std::move(img));
	saveImageToDisk(img);
}
