//1.class is a type����һ������

//2.member copy
/*
    1)use assignment operator =
    2)Ĭ������£�ÿ�������򶼱������Ķ�Ӧ����
*/

//3.��������
/*
    ��ʱ��Ҫ����һ��ֻ��һ�εĲ��������󣬳�֮Ϊ��������
*/

//4.�ṹ�壺C++�У��ṹ���ѱ�classȡ��

//5.�ֲ����Ƕ����
/*
    �ֲ�������һ����������������
    Ƕ����������һ��������������
*/

//6.����
/*
    1��C++������������ʵ�ֿ��Է���Ϊ�����ļ���
        .h:������
        .cpp:��ʵ��
??????????????????????????????????????????????    2����Ԫ��������������

*/

//7.������������������
/*
    ����������������ʵ��ʱ�����Զ���Ϊ��������
*/

//8.����ͬ�ļ�������˺����ض��壬��������޷����ָô���ֻ����link�׶μ�����

//9.����ͷ�ļ�����ΰ���
/*
    1)
        //#ifndef MY_HEADER_FILE_H
        //#define MY_HEADER_FILE_H
        ////blablabla
        //#endif
    2)
        //#pragma once//C++03
    3)
        //_Pragma("once")//C++11

*/



//#include<iostream>
//#include<string>
//using std::string;
//using uint=unsigned int;
//enum {MALE,FEMALE};
//class Human {
//
//private:
//
//  //variable
//  static uint count;
//  string name;
//  bool sex;
//  double height;
//  double weight;
//
//public:
//
//   //ctor
//  Human(string name,bool sex,double h,double w) {
//    this->name = name;
//    this->sex = sex;
//    height = h;
//    weight = w;
//  }
//
//
//  //get
//  string getName() {//getName�Զ���Ϊ��������
//    return name;
//  }
//  bool getSex();//��������������ʵ�֣�getSex������������
//  double getHeight();
//};
//
//
//
//bool Human::getSex() { return sex; }
//inline double Human::getHeight() { return height; }//����ʱд��inline��getHeight����������
//
//
//
//
//
//int main() {
//  Human spidy{"spidy", MALE, 180, 180};
//  Human candy = spidy;
//  Human nancy = Human{"nancy", MALE, 170, 100};//��������
//  return 0; }