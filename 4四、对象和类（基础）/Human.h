#pragma once
#include"head.h"
enum { MALE, FEMALE };
class Human {

 private:
  // variable
  static uint count;
  string name;
  bool sex;
  double height;
  double weight;

 public:
  // ctor
  Human() : Human("name", 0, 175, 110){};
  Human(string name, bool sex, double h, double w);
  // get
  string getName();
  bool getSex();
  double getHeight();
  //set
  void setHeight(double newH);
};









inline Human::Human(string name, bool sex, double h, double w) {
  this->name = name;
  this->sex = sex;
  height = h;
  weight = w;
}
inline string Human::getName() {
  return name;
}
inline bool Human::getSex() {
  return sex;
}
inline double Human::getHeight() {
  return height;
}
inline void Human::setHeight(double newH) {
  height = newH;
  return;
}