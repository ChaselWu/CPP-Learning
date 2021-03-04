#include<iostream>
using namespace std;

int main() {
    //int x{ 1.0 };//错误：列表初始化不允许窄化
    int x{ 1 };
    cout << x << endl;

    //强制类型转换：int<->double
    cout << 1 / 2 << endl;
    cout << static_cast <double>(1) / 2 << endl;
    cout << static_cast<double>(1 / 2) << endl;
    cout << 1.0f / 2.f << endl;
    cin.get();

    /*bool d = 1 & 2;
    cout << d;
    long int x(1.1);
    cout << x;*/
    return 0;
}