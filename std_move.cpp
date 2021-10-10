#include <chrono>
#include <iostream>
#include <random>
#include <vector>

int main(void) {
  std::vector<int> vec1;
  std::vector<int> vec2;
  std::random_device rd;
  std::uniform_int_distribution<int> dist(1, 100);

  for (int i = 0; i < 100; i++) {
    vec1.push_back(dist(rd));
  }

  vec2 = std::move(
      vec1); // Tells compiler that compiler is free to use memory used by vec1

  std::cout << "vec2: ";
  for (auto &item : vec2) {
    std::cout << item << " ";
  }
  std::cout << "\nvec1 : ";

  for (auto &item : vec1) {
    std::cout << item << " ";
  }
  return 0;
}
