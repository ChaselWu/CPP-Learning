#include"Mystring.h"
int main() {
  MyString s1{};
  MyString s2{"Hellon, World! "};
  std::cout << s1.getString() << std::endl;
  std::cout << s2.getString() << std::endl;
}