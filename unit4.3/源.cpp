//1. 用户从键盘输入形式如 #ab !#12 - 45 * c * # +
//    *f *
//        这样的“数值范围”字符串，代表从12到45这个范围。12前面和45后面会有一些不包含数字以及英文连字
// 符的干扰字符。 2. 请你编写一个类
//            Parse，可以解析这个字符串。然后提供两个函数，能够获取字符串中的第一个整数和第二个整数。
//（10分）
//用户从键盘输入形式如 12 -45 这样的“数值范围”字符串，代表从12到45这个范围。
//请你编写一个类
//        Parse，可以解析这个字符串。然后提供两个函数，能够获取字符串中的第一个整数和第二个整数。（10分）
//            题目内容：
//                Parse类要提供一个有参构造函数，接收一个字符串参数；
//
//                    Parse类要提供一个 int
//                    getFirst() 函数，返回“数值范围”字符串中的前面的整数；
//
//    Parse类要提供一个 int getLast() 函数，返回“数值范围”字符串中的后面的整数；
//

#include <iostream>
#include <string>
using std::string;
class Parse {
 private:
  string s;

 public:
  Parse(string s_) : s{s_} {}
  int getFirst() {
    int atMinus = s.find_first_of('-');
    string first = s.substr(0, atMinus);
    int index_f{0};
    for (auto i : first) {
      if (i < '0' || i > '9') {
        index_f++;
      }
      if (i > '0' && i < '9') {
        break;
      }
    }
    first = first.substr(index_f);
    int first_ = std::stoi(first);
    return first_;
  }
  int getLast() {
    int atMinus = s.find_first_of('-');
    string last = s.substr(atMinus + 1);
    int index_l{0};
    for (auto i : last) {
      if (i < '0' || i > '9') {
        index_l++;
      }
    }
    int len{sizeof(last)};
    last = last.substr(0, len - index_l);
    int last_ = std::stoi(last);
    return last_;
  };
};

int main() {
  std::string s{};
  std::cin >> s;  // 用户输入一个范围字符串
  Parse p(s);     // 构造Parse对象p，同时解析字符串 s
  std::cout << p.getFirst() << ' '
            << p.getLast();  // 中间是两个单引号括起来的一个空格字符
  return 0;
}