#include <iostream>
using std::cout;
using std::endl;
class rectangle {
 public:
  double wid, len;

  rectangle() {
    wid = 1.0;
    len = 1.0;
  }
  rectangle(double w) {
    wid = w;
    len = w;
  }
  rectangle(double w, double l) {
    len = l;
    wid = w;
  }

  double getArea() {
    return (len * wid);
  }
  double getPerimeter() {
    return (2 * (len + wid));
  }
};



int main() {

  rectangle rec1{};
  rectangle rec2{2.5};
  rectangle rec3{3.0, 4.0};
  cout << rec1.len << endl<<rec2.len<<rec2.wid<<endl<<rec3.len<<rec3.wid;
  rectangle rec4 = rec3;

  return 0;
}


















