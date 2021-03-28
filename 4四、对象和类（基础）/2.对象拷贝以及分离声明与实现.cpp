//1.class is a type类是一种类型

//2.member copy
/*
    1)use assignment operator =
    2)默认情况下，每个数据域都被拷贝的对应部分
*/

//3.匿名对象
/*
    有时需要创建一个只用一次的不命名对象，称之为匿名对象
*/

//4.结构体：C++中，结构体已被class取代

//5.局部类和嵌套类
/*
    局部类是在一个函数中声明的类
    嵌套类是在另一个类中声明的类
*/

//6.分离
/*
    1）C++中类声明和类实现可以分离为两个文件：
        .h:类声明
        .cpp:类实现
??????????????????????????????????????????????    2）二元作用域解析运算符

*/

//7.内联声明和内联函数
/*
    当函数在类声明中实现时，他自动成为内联函数
*/

//8.若不同文件间出现了函数重定义，则编译器无法发现该错误，只能在link阶段检测出来

//9.避免头文件被多次包含
/*
    1)
        //#ifndef MY_HEADER_FILE_H
        //#define MY_HEADER_FILE_H
        ////blablabla
        //#endif
    2)
        //#pragma once//C++03
    3)
        //_Pragma("once")//C++11

*/



//#include<iostream>
//#include<string>
//using std::string;
//using uint=unsigned int;
//enum {MALE,FEMALE};
//class Human {
//
//private:
//
//  //variable
//  static uint count;
//  string name;
//  bool sex;
//  double height;
//  double weight;
//
//public:
//
//   //ctor
//  Human(string name,bool sex,double h,double w) {
//    this->name = name;
//    this->sex = sex;
//    height = h;
//    weight = w;
//  }
//
//
//  //get
//  string getName() {//getName自动成为内联函数
//    return name;
//  }
//  bool getSex();//在内声明，在外实现，getSex不是内联函数
//  double getHeight();
//};
//
//
//
//bool Human::getSex() { return sex; }
//inline double Human::getHeight() { return height; }//定义时写了inline，getHeight是内联函数
//
//
//
//
//
//int main() {
//  Human spidy{"spidy", MALE, 180, 180};
//  Human candy = spidy;
//  Human nancy = Human{"nancy", MALE, 170, 100};//匿名对象
//  return 0; }