//1.Type类型是贯穿于计算机程序中的概念
/*
    1.1)Data Type
        int, long int, double, struct, char*, float[], int(*f)()
    1.2)Constructs of a Computer Program计算机程序构造块：
        计算机程序构造块是不同大小粒度的计算机程序组成部分，包括变量、表达式、函数或者模块等
*/

//2.类型系统
/*
    在编程语言中，“类型系统”是将“type”属性指定给不同计算机程序构造块的规则集。
    这些类型规范并强制程序员用于数据结构和组件的其他因时间类别。
*/

//3.为什么使用类型系统：
/*
    通过定义不同程序块间的接口和检查多个块之间是否以一致的方式连接在一起，以减少可能出现的bug。
*/

//4.静态类型vs动态类型
/*
    程序设计语言的类型系统机制会检查连接在一起的多个块的一致性。

    上述检查若发生在编译期，称为静态类型；（C++即为静态类型语言）
    发生在运行时，称为动态类型；
    同时存在于编译期和运行时，称为混合类型。
*/

//5.关键字auto
/*
    C++03及以前的标准种，auto放在变量声明前，声明变量的存储策略。但该关键字常省略不写。
    C++11中，auto关键字放在变量前，作用是在声明变量的时候根据变量初始值的类型自动为此变量选择匹配的
    类型。
*/

//6.auto的使用限制
/*
    6.1)auto变量在定义时必须初始化，这类似于const
    6.2)定义在一个auto序列的变量必须始终推导成同一类型
    6.3)如果初始化表达式是引用或const，则去除引用或const语义。（auto定义的是新的变量）
    6.4)如果auto表达式带上&符号，则不去除引用或const语义（auto&定义的是引用，是别名）
    6.5)初始表达式为数组时，auto关键字推导类型为指针。
    6.6)若表达式为数组且auto带上&，则推导类型为数组类型
    6.7)C++14中，auto可以作为函数的返回值类型和参数类型
*/

//7.尽量使用auto
/*
    原因之一：保证声明变量时就初始化了

    将int x=3;变为auto形式：
    auto x = int{3};//列表初始化
    auto x = int{3.0);//error：窄化
    auto x = int(3);//C风格的强制类型转换
*/

//8.自动类型推导：关键字decltype
/*
////#include<iostream>
////using namespace std;
////int  fun1()  { return 10;  }
////auto fun2()  { return 'g'; }  // C++14
////int main(){
////    // Data type of x is same as return type of fun1()
////    // and type of y is same as return type of fun2()
////    decltype(fun1()) x;  // 不会执行fun1()函数
////    decltype(fun2()) y = fun2();
////    cout << typeid(x).name() << endl;
////    cout << typeid(y).name() << endl;
////    return 0;
////}
*/