//1. ��д������
//
//    Dog���Cat��̳�Animal�ࣻ
//
//        Dog�ࡢCat�ࡢAnimal�����һ��Ĭ�Ϲ��캯�����ֱ�����ַ�����Dog������Cat���͡�Animal����
// ����ַ������С�ע�������ַ���������ĸ���Ǵ�д��
//
//    �� Animal ���ж��崿�麯��
//    speak() ��
//
//    �� Dog �� Cat���и�д����� speak()
//        ������Dog���speak��������ַ�����wang��֮���У�Cat���speak��������ַ�����miao��֮
// ���С�ע���ַ�����wang���͡�miao������Сд��ĸ
//    ������������������κ���������������Щ������ֱ�ӻ��߼������κ���Ϣ

#include <iostream>
#include <vector>
class Animal {
 protected:
  static int count;

 public:
  Animal() {
    std::cout << "Animal" << std::endl;
    count++;
  }
  ~Animal() { count--; }
  static int getCount() { return count; }

  virtual void speak() = 0;
};
int Animal::count{0};

class Cat:public Animal {
 public:
  Cat() { std::cout << "Cat" << std::endl; }
  virtual void speak() override { std::cout << "miao" << std::endl; }
};

class Dog : public Animal {
 public:
  Dog() {
    std::cout << "Dog" << std::endl;
    // count++;
  }
  ~Dog() { count--; }
  static int getCount() { return count; }

  virtual void speak() override { std::cout << "wang" << std::endl; }
};


//2. ��д������
//    ���������н����û������һ������N������0����
//
//        ����һ��vector����v ����������������֣����洢Animal�����ָ�롣
//
//    �����ȴ���һ�� Dog ���󣬽������ٴ���һ�� Cat
//        �����������洴���Ĵ���һ������ N �� Dog�����N�� Cat
//            ���󣻽���ЩDog�����Cat�����ָ�밴�մ����Ĵ��򶼴���v�С�����ʾ������ʹ��vector
// ::push_back() ��������
//
//    ������v�еĶ��󣬰����Ⱥ����������� speak() ������Ȼ����
//    delete ��ʽ���١���ע�⣺ÿ����һ������� speak() ֮�󣬾�������
//    delete ���ٸö��󣩡�
//
//    �����г��˽����û����������֮�⣬û���κ�����������䣻
//
//    �����г��˹��캯����speak() �����֮�⣬û���κ����������
int main() {
  std::vector<Animal*> v;
  int N;
  std::cin >> N;

  for (int i = 0; i < N; i++) {
    v.push_back(new Dog{});
    v.push_back(new Cat{});//��private�̳б���
  }
  for (int i = 0; i < 2*N; i++) {
    v.front()->speak();
    delete v.front();
    v.erase(v.begin());
  }
  return 0;
}