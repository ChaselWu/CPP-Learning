#include <iostream>
#include <string>
using std::string;
class Student {
 private:
  string* name;
  unsigned int id;

 public:
  Student() : id{0} {
    name = new string("UNKNOWN");
  }
  Student(string name_, unsigned int id_) : name{new string(name_)}, id{id_} {}
  string getName() { return *name; }
  unsigned int getId() { return id; }
  void setName(string name_) { *name = name_; }
  void setId(unsigned id_) { id = id_; }
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
  ~Graduate() { delete supervisor; };
};

int main() {
  Student stu1("CaixvRen", 123456);
  Graduate gra2("lisi", 123456, "DaCui");
  std::cout << stu1.getName() << "  " << stu1.getId() << std::endl
            << gra2.getName() << "  " << gra2.getId() << "  "
            << gra2.getSupervisor();

  return 0;
}