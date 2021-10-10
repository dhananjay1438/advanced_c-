#include <iostream>

void wont_throw(int a) noexcept {

  std::cout << a;
  // throw(a); should not throw exception
}
void will_throw(int a) noexcept(false) { // Can throw exception

  try {
    throw a;
  } catch (...) {
    std::cout << "Some exception";
  }
}

int main(void) {
  std::cout << noexcept(wont_throw);
  std::cout << noexcept(will_throw);
  return 0;
}
