#include <iostream>
using namespace std;

int main() {
    int* p = nullptr;
    int* q{ nullptr };

    p = new int(42);
    q = new int[4];

    cout <<"Before:*p="<< *p<<endl;
    *p = 24;
    cout << "After:*p=" << *p << endl;

    for (int i = 0; i < 4; i++) {
        *(q + i) = 10 + i;
        cout << *(q + i) << endl;
    }
    delete p;
    delete[]q;

    int a{12};
    double b=static_cast<double>(a);
    int c{static_cast<int>(b)};
    cout << a << b<<  c;

    return 0;
}