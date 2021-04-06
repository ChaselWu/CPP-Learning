//1. 编写三个类
//
//    Dog类和Cat类继承Animal类；
//
//        Dog类、Cat类、Animal类各有一个默认构造函数，分别输出字符串“Dog”、“Cat”和“Animal”。
// 输出字符串后换行。注意三个字符串的首字母都是大写。
//
//    在 Animal 类中定义纯虚函数
//    speak() ；
//
//    在 Dog 和 Cat类中覆写基类的 speak()
//        函数。Dog类的speak函数输出字符串“wang”之后换行；Cat类的speak函数输出字符串“miao”之
// 后换行。注意字符串“wang”和“miao”都是小写字母
//    上述三个类中如果有任何其它函数，则这些函数不直接或者间接输出任何信息

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


//2. 编写主函数
//    在主函数中接受用户输入的一个整数N（大于0）；
//
//        创建一个vector对象v （你可以用其它名字），存储Animal对象的指针。
//
//    按照先创建一个 Dog 对象，紧接着再创建一个 Cat
//        对象这样交替创建的次序，一共创建 N 个 Dog对象和N个 Cat
//            对象；将这些Dog对象和Cat对象的指针按照创建的次序都存入v中。（提示：可以使用vector
// ::push_back() 函数）。
//
//    将存入v中的对象，按照先后次序，逐个调用 speak() 函数，然后用
//    delete 显式销毁。（注意：每调用一个对象的 speak() 之后，就立即用
//    delete 销毁该对象）。
//
//    程序中除了接受用户输入的整数之外，没有任何其它输入语句；
//
//    程序中除了构造函数和speak() 的输出之外，没有任何其它输出。
int main() {
  std::vector<Animal*> v;
  int N;
  std::cin >> N;

  for (int i = 0; i < N; i++) {
    v.push_back(new Dog{});
    v.push_back(new Cat{});//若private继承报错？
  }
  for (int i = 0; i < 2*N; i++) {
    v.front()->speak();
    delete v.front();
    v.erase(v.begin());
  }
  return 0;
}