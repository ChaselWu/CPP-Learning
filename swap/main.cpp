#include<iostream>
using namespace std;

void swap_by_Value(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}
void swap_by_Pointer(int* p1, int* p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
void swap_by_Reference(int& rx, int& ry) {
    int temp = rx;
    rx = ry;
    ry = temp;
}

int main() {
    int a = 10, b = 5;
    cout << "before:a=" << a << "   b=" << b << endl;

    swap_by_Value(a, b);
    cout << "swap by value:a=" << a << "   b=" << b << endl;

    a = 10; b = 5;
    swap_by_Pointer(&a, &b);
    cout << "swap by pointer:a=" << a << "   b=" << b << endl;

    a = 10; b = 5;
    swap_by_Reference(a, b);
    cout << "swap by reference:a=" << a << "   b=" << b << endl;
    return 0;
}