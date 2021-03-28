#include <iostream>
using std::cout;
using std::endl;
using std::string;
int main() {

  int* p_num1 = new int(42);
  cout << *p_num1<<endl;
  p_num1 = nullptr;
  delete p_num1;

  char* p_c1 = new char('a');
  cout << *p_c1<<endl;
  p_c1 = nullptr;
  delete p_c1;

  int* arr = new int[42];
  for (int i = 0; i < 42; i++) {
    *(arr + i) = i;
    cout << *(arr + i);
  }
  cout << endl;

  int* k1 = new int(42);
  string* s1 = new string("sdfs");

  string* name = new string("Chasel");
  cout << *name<<endl;
  *name = "hahaha";
  cout << *name<<endl;

  char* nickname = new char[80];
  /*for (auto i : nickname) {//错误：没有提供begin（）和end（）
  }*/

  char array[20];
  for (auto i : array) {
    array[1] = 'a';
    cout << array[1] << " ";
  }
  cout << endl;
  nickname[1] = 3;







  return 0;
}