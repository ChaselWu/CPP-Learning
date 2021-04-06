//1.delegating constructor代理构造/委托构造
/*
    1）一个ctor可以调用另外的ctor
    2）避免递归调用目标ctor
*/
//#include<iostream>
//class Skill {
// public:
//  int value;
//
// public:
//  Skill() : Skill(1) {}
//  Skill(int va_) : value{va_} {}
//};
//int main() {
//  Skill a{};
//  std::cout << a.value;
//  return 0; }

//2.不可变对象和类
/*
    1）不可变对象：
        对象创建后，其内容不可改变，除非通过成员拷贝
    2）不可变类：
        不可变对象所属的类
        （所有数据域私有
          没有mutator（包括了setter和其他直接和间接修改数据域的函数）
          没有能返回可变数据域对象的引用或指针的访问器）
*/

//3.实例成员和静态成员
/*
    1）静态成员
        1.1）声明：
            在类声明中，关键字static声明不绑定到类实例的成员（该成员无需创建对象即可访问）
        1.2）定义：
            声明为constexpr类型的静态数据成员必须在类中声明并初始化。自C++17起，可不在类外定义。
            声明为inline（c++17起）或者const int类型的静态数据成员可以在类中声明并初始化
            其余需在类外定义并初始化，且不带static关键字
*/
//#include<iostream>
//class Body {
// public:
//  static constexpr int count1{0};
//  static const int count2{0};
//  static int count3(){};
//  static int count4;
//};
//inline int Body::count3 (){ return 0; }
//int Body::count4{0};
/*
        1.3）特性：
            静态数据成员具有静态存储期（或者C++11）线程存储期特性
        1.4）静态存储期：
            对象的存储在程序开始时分配，在程序结束时回收
            多个对象中也只存在一个实例
            ????????????????????????未明确初始化时将自动零初始化
*/

//2.实例成员
/*
    对象与对象间不共享的类中成员。反之，共享的即为静态成员。
*/
