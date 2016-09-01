#include <mutex>
#include <iostream>

int main() {
  using Mutex = std::mutex;

  Mutex mutex;

  {
    std::lock_guard<Mutex> guard{mutex};

    // fn();
  }

}
