//1.stack class:
/*
    1）一种后进先出的数据结构
    2）进栈：push
       出栈：pop
    3）stack类封装了栈的存储空间并提供了操作栈的函数：(以int栈为例）
        class StackOfIntegers{
          private:
           int elements[capacity];
           int size;

          public:
           ctor;
           bool empty();
           int peek();//读取栈顶元素而不删除
           int push(int);
           int pop();
           int getSize();
        }
*/
//#include<iostream>
//#include"StackOfIntegers.h"
//int main() { return 0; }