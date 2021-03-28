#include <iostream>
using uint = unsigned int;
class MyString {
 private:
  unsigned int len_{0};
  char c_[1024]{'\0'};  //�ڹ��캯������ȥ��ʼ��

 public:
  MyString() : len_{0} {
    len_ = {0};           //��Ч�ĳ�ʼ��
    for (auto& x : c_) {  //
      x = '\0';
    }
  }

  MyString(const char* s) : MyString() {
    //��s��ֵ���ַ���������c_[]������
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
