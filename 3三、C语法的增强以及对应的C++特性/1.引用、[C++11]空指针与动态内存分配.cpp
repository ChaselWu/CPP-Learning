//1.引用的定义
/*
    引用就是另一个变量的别名
*/

//2.声明引用的方法
/*
    1)int x;
      int& rx=x;

    2)int x, & rx=x;

    {
    Coding Conventions:
        51.C++指针与引用符号赢靠近其类型而非名字
    }
*/

    //3.引用的性质
/*
    1)通过引用所做的读写操作实际上是作用于原变量上
    2)引用必须在声明的时候初始化
    3)引用一旦初始化，引用名字就不能再指定给其他变量
*/

//4.引用类型做函数的参数：引用传递
   //例子：
//#include<iostream>
//using namespace std;
//
//void swap_by_value(int x, int y) {
//    int temp = x; x = y; y = temp;
//}
//void swap_by_pointer(int* p1, int* p2) {
//    int temp = *p1; *p1 = *p2; *p2 = temp;
//}
//void swap_by_reference(int& rx, int& ry) {
//    int temp = rx; rx = ry; ry = temp;
//}
//
//int main() {
//    int a = 10, b = 5;
//    cout << "before:a=" << a << "   b=" << b << endl;
//
//    swap_by_value(a, b);
//    cout << "swap by value:a=" << a << "   b=" << b << endl;
//
//    a = 10; b = 5;
//    swap_by_pointer(&a, &b);
//    cout << "swap by pointer:a=" << a << "   b=" << b << endl;
//
//    a = 10; b = 5;
//    swap_by_reference(a, b);
//    cout << "swap by reference:a=" << a << "   b=" << b << endl;
//    return 0;
//}


//5.示例代码
//#include<iostream>
//using namespace std;
//
//int main() {
//    int x = 0;
//    int y{ 10 };
//    int& rx = x;
//    rx = 8;
//
//    const char* s = "Hello";
//    const char* t = "World";
//
//    const char*& r = s;
//    r = t;
//    cout << r << endl;
//    cout << s << endl;
//
//    cout << x << endl;
//
//    cin.get();
//    return 0;
//}

//6.单步调试


//7.nullptr空指针
/*
    1)0带来的二义性问题
    2)C++标准化委员会希望“空指针”是一个确定的东西：
        C++11引入保留字“nullptr”作为空指针
*/

//8.Dynamic Memory Management:Allocate/Release动态内存管理：分配/释放
/*
    1)C++中通过运算符new申请动态内存，成功返回指定类型内存的地址，失败则抛出异常或者返回空指针
        //new 类型名(初值);
        //new 类型名[常量表达式];

    2)动态内存使用完毕后，使用delete运算符来释放
        //delete 指针名;
        //delete[] 指针名;
        //指针名 = nullptr;//删掉的是空间，但是指针并没有删除，而是重新随机指向了一个空间

    {内存四区：
        栈
        堆：手动申请的内存
        静态区：存储静态变量和全局变量
        代码区
    }

    3)例子：
*/
//#include <iostream>
//using namespace std;
//
//int main() {
//    int* p = nullptr;
//    int* q{ nullptr };
//
//    p = new int(42);
//    q = new int[4];
//
//    cout <<"Before:*p="<< *p<<endl;
//    *p = 24;
//    cout << "After:*p=" << *p << endl;
//
//    for (int i = 0; i < 4; i++) {
//        *(q + i) = 10 + i;
//        cout << *(q + i) << endl;
//    }
//    delete p;
//    delete[]q;
//
//
//    return 0;
//}
