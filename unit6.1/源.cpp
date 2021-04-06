//编写 Animal 类和 Dog 类；
//    根据用户输入的数值，创建相应个数的 Animal 对象和 Dog 对象（10分） 题目内容：
//    1. 编写两个类
//
//        Dog类继承Animal类；
//        Animal类和Dog类各有一个默认构造函数，分别输出字符串 “Animal”和“Dog”。输出字符串后换
// 行
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
//    2. 编写主函数
//
//        在主函数中接受用户输入的一个整数N（大于0）；
//            按照先创建一个 Animal 对象，紧接着再创建一个 Dog
//                对象这样交替创建的次序，一共创建 N 个 Animal对象和Dog对象
//                    程序中除了接受用户输入的整数之外，没有任何其它输入语句；
//                        程序中除了构造函数的输出之外，没有任何其它输出。
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