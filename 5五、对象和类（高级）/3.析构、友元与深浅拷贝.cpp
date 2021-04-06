//1.析构函数
/*
    对象销毁时调用
    ClassName::~ClassName();
    未显示声明时编译器生成默认函数
    不可重载
*/

//2.友元
/*  1）分类：
        友元函数和友元类
    2）用途：
        授权某些可信的函数和某些其他的类访问类中的私有成员
*/
//#include<iostream>
//class Hero {
// private:
//  int HP{10};
//  int MP{10};
//
// //public:
//  friend class Army;
//  friend void attacked(Hero& h_);
//};
//
//class Army {
// private:
//  Hero soldier;
//  Hero mage;
//
// public:
//  Army() {
//    soldier.HP++;
//    mage.MP++;
//  }
//};
//void attacked(Hero& h_) {
//  h_.HP--;
//  return;
//}
//int main() { return 0; }


//3.拷贝构造函数
/*
    1）copy ctor拷贝构造：
        用一个对象初始化另一个同类对象
    2）cp ctor的声明：
        ClassName(ClassName& o);
        ClassName(const ClassName& o);
        ClassName(const ClassName& o, 默认参数);
    3）cp ctor的调用：
        ClassName o1(prameterValue);
        ClassName o2(o1);
        ClassName o3=o1;
        ClassName o4{o1};
        ClassName 05={o1};
    4）注意：
        若两个对象已经定义，然后o1=o2;则这是对象赋值语句，而非需调用构造函数的初始化语句或声明语
      句，其并不调用拷贝构造函数。
    5）隐式声明的拷贝构造函数
        若程序员不编写cp ctor，那么编译器会自动生成一个隐式声明/定义的cp ctor。
        一般情况下，隐式声明的cp ctor简单地将作为参数的对象中的每个数据域复制到新对象中
*/

//4.深拷贝和浅拷贝
/*
    1）浅拷贝：
        数据域是一个指针，拷贝了指针地址，而未拷贝指针指向的内容。
    2）什么时候出现浅拷贝：
        2.1）初始化时：调用隐式cp ctor或默认ctor时
        2.2）赋值时：使用默认赋值运算符为已有对象赋值
    3）深拷贝：
        拷贝指针成员指向的内容，而非指针地址
    4）如何深拷贝：
        4.1）初始化时：自行编写拷贝构造函数
        4.2）赋值时：重载赋值运算符
*/
//#include<iostream>
//#include<string>
//using std::string;
//class Hero {
// private:
//  string* character = new string("UNKNOWN");
//
// public:
//  ~Hero() {
//    delete character;
//    character = nullptr;
//  }
//  Hero(string s_) { *character = s_; }
//  Hero() : Hero("modesty"){};
//  Hero(const Hero& h_) { *character = *(h_.character); }
//
//  //重载赋值运算符
//  Hero& operator=(const Hero& h_) {
//    *character = *(h_.character);
//    return *this;
//  }
//
//  string getCharacter() { return *character; }
//};
//
//int main() {
//  Hero ezio{"proud"}, altair{};
//  std::cout << ezio.getCharacter();
//  ezio = altair;
//  std::cout << ezio.getCharacter();
//  return 0;
//}