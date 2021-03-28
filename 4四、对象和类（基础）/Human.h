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









Human::Human(string name, bool sex, double h, double w) {
  this->name = name;
  this->sex = sex;
  height = h;
  weight = w;
}
string Human::getName() {
  return name;
}
bool Human::getSex() {
  return sex;
}
double Human::getHeight() {
  return height;
}
void Human::setHeight(double newH) {
  height = newH;
  return;
}