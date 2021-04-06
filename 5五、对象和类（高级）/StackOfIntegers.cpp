#include"StackOfIntegers.h"
StackOfIntegers::StackOfIntegers() {
  for (int& i:elements) {
    i = 0;
  }
}
bool StackOfIntegers::empty() {
  if (size == 0) {
    return true;
  } else {
    return false;
  }
};
int StackOfIntegers::peek() { return elements[size - 1]; };
int StackOfIntegers::push(int v_) {
  elements[size] = v_;
  size++;
  return v_;
};
int StackOfIntegers::pop() {
  int temp = elements[size - 1];
  elements[size - 1] = 0;
  size--;
  return temp;
};
int StackOfIntegers::getSize() { return size; };