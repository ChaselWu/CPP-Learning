#include <iostream>
using uint = unsigned int;
class MyString {
 private:
  unsigned int len_{0};
  char c_[1024]{'\0'};  //在构造函数中再去初始化

 public:
  MyString() : len_{0} {
    len_ = {0};           //无效的初始化
    for (auto& x : c_) {  //
      x = '\0';
    }
  }

  MyString(const char* s) : MyString() {
    //将s所值的字符串拷贝到c_[]数组中
    uint lenOfs{0};
    auto p{s};
    while (*p != '\0') {
      p++;
      lenOfs++;
    }
    strncpy_s(c_, s, lenOfs);
    len_ = lenOfs;
  }
  const char* getString() { return c_; }
};
