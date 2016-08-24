#include <iostream>
#include <string>
#include <unordered_map>


using Dict = std::unordered_map<std::string, std::string>;


auto getTranslations() {
  Dict translations{{"Hallo", "Hello"}, {"World", "Welt"}};
  return translations;
}


int main() {
  for (const auto each : getTranslations()) {
    std::cout << each.first << " -> " << each.second << std::endl;
  }
}
