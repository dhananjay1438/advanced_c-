#include <iostream>
#include <stack>

// Calls implict move constructor
class Temp {

public:
  int a, b;
  std::string str;
  Temp(int a, int b, std::string str) : a(a), b(b), str(str) {}
  Temp() {}
  void set(int a, int b, std::string str) {
    this->a = a;
    this->b = b;
    this->str = std::move(str);
  }
};

int main(void) {
  Temp t1, t2, t3;
  t1.set(10, 20, "hello");
  t2 = std::move(t1);
  t3 = std::move(t1);
  return 0;
}
