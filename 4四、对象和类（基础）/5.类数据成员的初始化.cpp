//1.���Ա�ľ͵س�ʼ��
/*������ʱ�ĳ�ʼ����
    1��c++03��׼�У�ֻ�о�̬�������γ�Ա���������о͵س�ʼ��
    2��C++11��׼�У��Ǿ�̬��Ա��������������ʱ���ʼ��
    3��һЩ�״�����
        ���в���ʹ��С���ų�ʼ��
        �������ͳ�Ա�����Զ��ƶϴ�С����ʦҲ˵��ܳ�)
*/

//2.���캯����ʼ���б�
/*
    1���ڹ��캯����ʹ�ó�ʼ���б�
        syntax��
        class Classname{
            Classname(parameter)
              :datafield1{value},datafield2{value}//��ʼ���б�
            {
                //ctorִ�����
            }
        }
    2��Ϊʲô��Ҫ��ʼ���б�
        �����Ƕ��������⣺
            ��Ƕ����Ĺ�������ڱ�Ƕ����Ĺ��캯����ִ��ǰ��
*/


//#include"head.h"
//class Feature {
// private:
//    double height;
//    double weight;
//
//   public:
//    Feature(double a, double b) {
//      height = a;
//      weight = b;
//    }
//};
//class Human {
// private:
//  string name="UNKNOWN";
//  bool sex=0;
//  Feature thisFeature;
//
// public:
//  //Human(double a,double b) {
//  //  thisFeature = Feature{a, b};//error�� ��Ƕ����Ĺ�������ڱ�Ƕ����Ĺ��캯����ִ��ǰ
//  //}
//   Human(double a, double b) : thisFeature{ a, b } {
//     //something else
//  }
//};
//
//
//int main() { return 0; }


//3.Ĭ�Ϲ��캯��
/*
    1�����壺
        �޲Ρ��ղ����б�����в�������Ĭ�ϲ���ֵ��ctor�������ClassName objectName();���õĹ��캯����
*/

//4.��Ա�ĳ�ʼ������
/*
    1����ʼ�������Ա/���Ա�ķ���������
        �͵س�ʼ��
        ���캯����ʼ���б�
        ���캯������Ϊ��Ա��ֵ
    2���͵س�ʼ�������ԣ�
        ��һ����Ա�ڹ���ʱͬʱ���о͵غͳ�ʼ���б����ַ�ʽ����͵���䱻���Բ�ִ��
          //#include <iostream>
          //int x = 0;
          //struct S {
          //int n = ++x;            // default initializer
          //S() { }                 // ʹ�þ͵س�ʼ��(default initializer)
          //    S(int arg) : n(arg) { } // ʹ�ó�Ա��ʼ���б�
          //};
          //int main() {
          //std::cout << x << '\n'; // ��� 0
          //S s1;
          //std::cout << x << '\n'; // ��� 1 (default initializer ran)
          //S s2(7);
          //std::cout << x << '\n'; // ��� 1 (default initializer did not run)
  }
*/













