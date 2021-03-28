//1. �û��Ӽ���������ʽ�� #ab !#12 - 45 * c * # +
//    *f *
//        �����ġ���ֵ��Χ���ַ����������12��45�����Χ��12ǰ���45�������һЩ�����������Լ�Ӣ������
// ���ĸ����ַ��� 2. �����дһ����
//            Parse�����Խ�������ַ�����Ȼ���ṩ�����������ܹ���ȡ�ַ����еĵ�һ�������͵ڶ���������
//��10�֣�
//�û��Ӽ���������ʽ�� 12 -45 �����ġ���ֵ��Χ���ַ����������12��45�����Χ��
//�����дһ����
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
  std::cin >> s;  // �û�����һ����Χ�ַ���
  Parse p(s);     // ����Parse����p��ͬʱ�����ַ��� s
  std::cout << p.getFirst() << ' '
            << p.getLast();  // �м���������������������һ���ո��ַ�
  return 0;
}