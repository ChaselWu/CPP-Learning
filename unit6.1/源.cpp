//��д Animal ��� Dog �ࣻ
//    �����û��������ֵ��������Ӧ������ Animal ����� Dog ����10�֣� ��Ŀ���ݣ�
//    1. ��д������
//
//        Dog��̳�Animal�ࣻ
//        Animal���Dog�����һ��Ĭ�Ϲ��캯�����ֱ�����ַ��� ��Animal���͡�Dog��������ַ�����
// ��
#include<iostream>
#include<vector>
class Animal {
 public:
  Animal() { std::cout << "Animal" << std::endl; }
};
class Dog : public Animal {
 public:
  Dog() { std::cout << "Dog" << std::endl; }
};


//
//    2. ��д������
//
//        ���������н����û������һ������N������0����
//            �����ȴ���һ�� Animal ���󣬽������ٴ���һ�� Dog
//                �����������洴���Ĵ���һ������ N �� Animal�����Dog����
//                    �����г��˽����û����������֮�⣬û���κ�����������䣻
//                        �����г��˹��캯�������֮�⣬û���κ����������
int main() {
  std::vector<Animal> a;
  int N;
  std::cin >> N;
  for (int i = 0; i < N; i++) {
    Animal{};
    Dog{};
  }
  return 0;
}