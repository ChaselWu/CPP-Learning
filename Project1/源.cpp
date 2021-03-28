//�û��Ӽ���������ʽ�� 12 -45 �����ġ���ֵ��Χ���ַ����������12��45�����Χ�� �����дһ����
//        Parse�����Խ�������ַ�����Ȼ���ṩ�����������ܹ���ȡ�ַ����еĵ�һ�������͵ڶ�����������10�֣�
//            ��Ŀ���ݣ�
//                Parse��Ҫ�ṩһ���вι��캯��������һ���ַ���������
//
//                    Parse��Ҫ�ṩһ�� int
//                    getFirst() ���������ء���ֵ��Χ���ַ����е�ǰ���������
//
//    Parse��Ҫ�ṩһ�� int getLast() ���������ء���ֵ��Χ���ַ����еĺ����������
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
    int first_ = std::stoi(first);
    return first_;
  }
  int getLast() {
    int atMinus = s.find_first_of('-');
    string last = s.substr( atMinus+1);
    int last_ = std::stoi(last);
    return last_;
  };
};



int main() {
  std::string s{};
  std::cin >> s;  // �û�����һ����Χ�ַ���
  Parse p(s);     // ����Parse����p��ͬʱ�����ַ��� s
  std::cout << p.getFirst() << ' '
            << p.getLast();  // �м���������������������һ���ո��ַ�
  return 0;
}