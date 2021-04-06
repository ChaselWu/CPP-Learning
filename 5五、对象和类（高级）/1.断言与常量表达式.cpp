//1.常量表达式
/*
    1）常量表达式是编译器可以计算值的一个表达式
    2）const修饰的对象未必是编译期常量
*/
//#include<iostream>
//int n = 10;
//const int rcn = n;//rcn是运行期常量
////rcn++;//error:rcn是常量
//std::array<int, rcn> arr;//error：rcn不是编译期常量
/*
    3）constexpr编译期常量表达式说明符
        constexpr说明符声明可在编译时计算函数或变量的值
*/
//#include<iostream>
//#include<array>
//int main() {
//  int n = 10;
//  const int r = 12;//编译期常量
//  const int rcm = n++;//运行期常量
//  constexpr int c = 123;
//  std::array<int, c> a;
//  //constexpr int rcm1 = n++;//error:n必须是常量表达式
//
//  //还可以用constexpr修饰函数，其中传递的参数必须是常量表达式。这里懒我就不写了
//
//  return 0;
//}
/*
    4）const vs constexpr
        const：告知程序员，修饰的内容是不会被修改的。主要目的是帮程序员避免bug
        constexpr：用在所有被要求使用constant expression的地方，主要目的是让编译器能够优化代码，主
      要目的是让编译器能够优化代码并提升性能。
            constexpr的用法有很多细节，初学者了解其含义即可
*/

//2.断言与静态断言
/*
    1）断言是一条检测假设成立与否的语句
        1.1）assert：C语言的宏（Marco），运行时检测
        1.2）assert依赖于NDEBUG宏
            在DEBUG模式时，编译器不会定义NDEBUG，所以assert起作用
            在RELEASE模式时，编译器会自动定义NDEBUG，使assert不起作用
            如果要强制是的asssert生效（不生效），只需手动定义宏#define NDEBUG(#undef NDEBUG)
        1.3）assert帮助调试解决逻辑bug（部分替代“断点/单步调试”）

*/
//#include <cassert>
//#include<iostream>
//#include<array>
////#undef NDEBUG
//#define NDEBUG
//int main() {
//  std::array<int,3> arr{1, 2, 3};
//  for (int i = 0;; i++) {
//    assert(i < 3&&"i must be less than 3");
//  }
//
//  return 0; }
/*
    2）静态断言
        2.1）static_assert(bool_constexpr, message);
        2.2）作用：编译时断言检查
        2.3）static_assert的用途：
            常用在模板编程中，对写库的作者用处大
            第一个参数不能有变量表达式//反之，assert参数是可以有的
    3）何时使用断言：
        某些状况是预期中的，那么用错误处理，若某些状况永不该发生，用断言

*/

//3.声明与定义
/*
    1）声明：
        声明即引入标识符并描述其类型。
        无论是类型、对象还是函数，编译器都需要该声明，以便识别在别处使用该标识符。
    2）定义：
        定义即实例化/实现该标识符。
        连接器需要定义，以便对标识符的引用链接到标识符所表示的实体。
    3）区别
        定义有时可取代声明，反之则不行
        标识符可别声明多次，但只能定义一次
        定义通常伴随这编译器为标识符分配内存
*/