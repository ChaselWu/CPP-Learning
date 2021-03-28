//1.OOP
/*
    1）概念
    2）特征
        抽象
        多态
        封装
        继承
    3）对象的构成：
        对象具有唯一的标识、状态和行为：
            对象状态由数据域（属性）及其当前值构成
            对象行为由一组函数定义
    4）对象的定义：
        对象是类（class）的实例：
            一个class中需包含：
                data field, defined by variable
                behavior, defined by functions
            一个class中会含有两种特殊的函数：
                ctor：构造函数
                dtor：析构函数
*/

//2.ctor
/*
    1）ctor特点：
        自动调用
        与类同名
        无返回值
        可重载
        可不带参数
    2）class可以不声明ctor：
        编译器会提供一个空函数体的无参构造函数，且只有未声明ctor是才会提供此函数，称之为默认构造函数
        {
          default关键字用于恢复默认ctor:
              Circle()=default;
        }
*/

//3.创建对象

//4.对象访问运算符object member access operator 即点运算符





//#include<iostream>
//using uint=unsigned int;
//class Human {
// private:
//  static uint count;
//  bool sex;
//  double height;
//  double weight;
//
// public:
//  Human(bool sex,double h,double w) {
//    this->sex = sex;
//    height = h;
//    weight = w;
//  }
//};
//int main() { return 0; }