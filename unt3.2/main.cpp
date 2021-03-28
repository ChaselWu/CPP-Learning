#include <iostream>
int i = 1;
int main() {
  for (int i = 0; i < 5; i++) {
    ::i += i;
  }
  std::cout << ::i;
  return 0;
}