//1. 编写类Circle。 2. 编写主函数，利用 std::array
//    创建包含10个对象的Circle数组并初始化。 3. 用基于范围的for循环遍历Circle数组，求10个Circie对象
// 的面积之和（10分）
//        题目内容：
//
//            类Circle有两个构造函数。无参构造函数没有函数体，使用default关键字声明。有参构造函数接
// 收一个double类型参数作为Circle的半径。Circle类的半径的默认值是1 .0
//
//    类Circle有一个 double
//    getArea() 函数，返回圆的面积。圆周率的值取 3.14
//
//    在主函数中用 std::array
//    声明一个有10个Circle对象的数组。其中前5个Circle对象的半径分别设置为1
//    .0、2.0、3.0、4.0、5.0。后5个对象使用Circle的默认构造函数初始化。
//
//    在主函数中，用基于范围的for循环遍历Circle数组，求10个Circie对象的面积之和
//
//    在主函数中，输出所求出的面积和。输出结果为双精度浮点数。使用系统默认精度。无需做格式和精度控制
#include<iostream>
#include<array>
using std::array;

class Circle {
 private:
  double rad=1.0;

 public:
  Circle()=default;
  Circle(double r_) : rad{1.0} { rad = r_; }
  double getArea() { return 3.14 * rad * rad;}
};

int main() {
  array<Circle, 10> circles{1.0, 2.0, 3.0, 4.0, 5.0, {}, {}, {}, {}, {}};
  double ans = 0;
  for (auto i : circles) {
    ans += i.getArea();
  }
  std::cout << ans;
  return 0;
}