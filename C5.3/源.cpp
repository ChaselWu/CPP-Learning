#include <iostream>
#include <string>
using std::string;
class Student {
 private:
  string* name;
  unsigned int id;

 public:
  Student() : id{0} { name = new string("UNKNOWN"); }
  Student(string name_, unsigned int id_) : name{new string(name_)}, id{id_} {}
  string getName() { return *name; }
  unsigned int getId() { return id; }
  void setName(string name_) { *name = name_; }
  void setId(unsigned id_) { id = id_; }
  virtual string getInfo() { return "student";  }
  ~Student() { delete name; }
};

class Graduate : public Student {
 private:
  string* supervisor;

 public:
  Graduate() : supervisor{new string("DaCui")} {}
  Graduate(string name_, unsigned int id_, string sup_) {
    setName(name_);
    setId(id_);
    supervisor = new string(sup_);
  }
  string getSupervisor() { return *supervisor; }
  void setSupervisor(string sup_) { *supervisor = sup_; }
  virtual string getInfo() {
    return "graduate";
  }
  ~Graduate() { delete supervisor; };
};

void print(Student*);
void print(Student&);


int main() {
  Student stu1("CaixvRen", 123456);
  Graduate gra2("lisi", 1234562, "DaCui");
  std::cout << stu1.getName() << "  " << stu1.getId() << std::endl
            << gra2.getName() << "  " << gra2.getId() << "  "
            << gra2.getSupervisor()<<std::endl;
  Student* stu3 = new Student{"RollingKing", 944567};
  Graduate* gra4 = new Graduate{"ldsjo", 134234, "YDCui"};
  std::cout << stu3->getInfo() << std::endl << gra4->getInfo()<<std::endl;
  print(stu3);
  print(gra4);
  stu1 = gra2;
  //gra2 = stu1;
  stu3 = &gra2;
  gra4 = reinterpret_cast<Graduate*>(&stu1);
  gra4 = dynamic_cast<Graduate*>(&stu1);
  stu3 = dynamic_cast<Student*>(&gra2);
  return 0;
}


void print(Student* stu) {
  std::cout << stu->getName() << stu->getId() ;
  stu->getInfo();
  std::cout << std::endl;
}
void print(Student& stu) {
  std::cout << stu.getName() << stu.getId() << std::endl;
}