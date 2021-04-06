#ifndef MAIN_
#define MAIN_
#include<iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;



class Person {
 private:
  static unsigned int Num;
  string* name=new string{"UNKNOWN"};
 public:
  Person(){
    Num++;
    cout << "please input the name:" << endl;
    cin >> *name;
  };
  Person(const Person& man) {
    Num++;
    //int SizeofName = sizeof(man.name);
    ////name = new char(SizeofName+1);
    //for (int i = 0; i < SizeofName; i++) {
    //  name[i] = man.name[i];
    //}
    //name[SizeofName] = '\0';
    *name = *(man.name);
  }



  int getNum() { return Num; }

  static int getNum_sta() { return Num; }

  ~Person() {
    delete []name;
    name = nullptr;
  }


  friend void printNum(const Person& p);
  friend class Stu;



};


void printNum(const Person& p);

unsigned int Person::Num = 0;





int main() {

  Person stu1{}, stu2{}, stu3{};
  cout << stu3.getNum()<<endl<<Person::getNum_sta();
  return 0;
}

void printNum(const Person& p) { cout << p.Num << endl; }
class Stu {
 private:
  Person stu;
 public:
   Stu(){
     cout << stu.Num;
  }
};


#endif