#pragma once
class StackOfIntegers {
 private:
  int elements[100];
  int size{0};

 public:
  StackOfIntegers();
  bool empty();
  int peek();  //读取栈顶元素而不删除
  int push(int);
  int pop();
  int getSize();
};