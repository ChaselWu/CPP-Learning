#include<iostream>
using std::cout;
using std::cin;

int swap(int&, int& ,int&);

int main() { 
    int a, b, c;
    cin >> a >> b >> c;
    auto d = swap(a, b, c);
    cout << d << " " << a << " " << b << " " << c;
}

int swap(int& a, int& b, int& c) {
    int temp = c;
    c = b;
    b = a;
    a = temp;
    if (a >= b) {
        if (a >= c) {
            return a;
        }
    } 
    else {
        if (b >= c) {
            return b;
        } 
        else {
            return c;
        }
    }
}