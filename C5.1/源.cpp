#include<iostream>
#include<string>
using std::string;
class Student {
 private:
  string name;
  unsigned int id;

 public:
  Student() : name{"NBKNOWN"}, id{0} {}
  Student(string name_, unsigned int id_) : name{name_}, id{id_} {}
  string getName() { return name;}
  unsigned int getId() { return id; }
  void setName(string name_) { name = name_; }
  void setId(unsigned id_) { id = id_; }
  ~Student()=default;
};
class Graduate:public Student {
 private:
  string supervisor;

 public:
  Graduate() {}
  Graduate(string name_, unsigned int id_, string sup_) {
    setName(name_);
    setId(id_);
    supervisor = sup_;
  }
  string getSupervisor() { return supervisor;}
  void setSupervisor(string sup_) { supervisor = sup_; }
  ~Graduate(){};
};

int main() {
  Student stu1("CaixvRen", 123456);
  Graduate gra2("lisi", 123456, "DaCui");
  std::cout << stu1.getName() << "  " << stu1.getId() << std::endl
            << gra2.getName() << "  " << gra2.getId() << "  "
            << gra2.getSupervisor();

  return 0;
}