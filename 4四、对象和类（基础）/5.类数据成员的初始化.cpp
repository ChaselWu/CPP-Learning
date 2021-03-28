//1.类成员的就地初始化
/*（声明时的初始化）
    1）c++03标准中，只有静态常量整形成员才能在类中就地初始化
    2）C++11标准中，非静态成员可以在它声明的时候初始化
    3）一些易错或规则：
        类中不能使用小括号初始化
        数组类型成员不能自动推断大小（老师也说这很扯)
*/

//2.构造函数初始化列表
/*
    1）在构造函数中使用初始化列表：
        syntax：
        class Classname{
            Classname(parameter)
              :datafield1{value},datafield2{value}//初始化列表
            {
                //ctor执行语句
            }
        }
    2）为什么需要初始化列表：
        解决内嵌对象的问题：
            内嵌对象的构造必须在被嵌对象的构造函数体执行前。
*/


//#include"head.h"
//class Feature {
// private:
//    double height;
//    double weight;
//
//   public:
//    Feature(double a, double b) {
//      height = a;
//      weight = b;
//    }
//};
//class Human {
// private:
//  string name="UNKNOWN";
//  bool sex=0;
//  Feature thisFeature;
//
// public:
//  //Human(double a,double b) {
//  //  thisFeature = Feature{a, b};//error： 内嵌对象的构造必须在被嵌对象的构造函数体执行前
//  //}
//   Human(double a, double b) : thisFeature{ a, b } {
//     //something else
//  }
//};
//
//
//int main() { return 0; }


//3.默认构造函数
/*
    1）定义：
        无参、空参数列表或所有参数都有默认参数值的ctor（即语句ClassName objectName();调用的构造函数）
*/

//4.成员的初始化次序
/*
    1）初始化对象成员/类成员的方法即次序：
        就地初始化
        构造函数初始化列表
        构造函数体中为成员赋值
    2）就地初始化被忽略：
        若一个成员在构造时同时具有就地和初始化列表两种方式，则就地语句被忽略不执行
          //#include <iostream>
          //int x = 0;
          //struct S {
          //int n = ++x;            // default initializer
          //S() { }                 // 使用就地初始化(default initializer)
          //    S(int arg) : n(arg) { } // 使用成员初始化列表
          //};
          //int main() {
          //std::cout << x << '\n'; // 输出 0
          //S s1;
          //std::cout << x << '\n'; // 输出 1 (default initializer ran)
          //S s2(7);
          //std::cout << x << '\n'; // 输出 1 (default initializer did not run)
  }
*/













