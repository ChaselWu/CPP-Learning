#pragma once
class StackOfIntegers {
 private:
  int elements[100];
  int size{0};

 public:
  StackOfIntegers();
  bool empty();
  int peek();  //��ȡջ��Ԫ�ض���ɾ��
  int push(int);
  int pop();
  int getSize();
};