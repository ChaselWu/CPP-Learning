//1.��������
/*
    ��������ʱ����
    ClassName::~ClassName();
    δ��ʾ����ʱ����������Ĭ�Ϻ���
    ��������
*/

//2.��Ԫ
/*  1�����ࣺ
        ��Ԫ��������Ԫ��
    2����;��
        ��ȨĳЩ���ŵĺ�����ĳЩ��������������е�˽�г�Ա
*/
//#include<iostream>
//class Hero {
// private:
//  int HP{10};
//  int MP{10};
//
// //public:
//  friend class Army;
//  friend void attacked(Hero& h_);
//};
//
//class Army {
// private:
//  Hero soldier;
//  Hero mage;
//
// public:
//  Army() {
//    soldier.HP++;
//    mage.MP++;
//  }
//};
//void attacked(Hero& h_) {
//  h_.HP--;
//  return;
//}
//int main() { return 0; }


//3.�������캯��
/*
    1��copy ctor�������죺
        ��һ�������ʼ����һ��ͬ�����
    2��cp ctor��������
        ClassName(ClassName& o);
        ClassName(const ClassName& o);
        ClassName(const ClassName& o, Ĭ�ϲ���);
    3��cp ctor�ĵ��ã�
        ClassName o1(prameterValue);
        ClassName o2(o1);
        ClassName o3=o1;
        ClassName o4{o1};
        ClassName 05={o1};
    4��ע�⣺
        �����������Ѿ����壬Ȼ��o1=o2;�����Ƕ���ֵ��䣬��������ù��캯���ĳ�ʼ������������
      �䣬�䲢�����ÿ������캯����
    5����ʽ�����Ŀ������캯��
        ������Ա����дcp ctor����ô���������Զ�����һ����ʽ����/�����cp ctor��
        һ������£���ʽ������cp ctor�򵥵ؽ���Ϊ�����Ķ����е�ÿ���������Ƶ��¶�����
*/

//4.�����ǳ����
/*
    1��ǳ������
        ��������һ��ָ�룬������ָ���ַ����δ����ָ��ָ������ݡ�
    2��ʲôʱ�����ǳ������
        2.1����ʼ��ʱ��������ʽcp ctor��Ĭ��ctorʱ
        2.2����ֵʱ��ʹ��Ĭ�ϸ�ֵ�����Ϊ���ж���ֵ
    3�������
        ����ָ���Աָ������ݣ�����ָ���ַ
    4����������
        4.1����ʼ��ʱ�����б�д�������캯��
        4.2����ֵʱ�����ظ�ֵ�����
*/
//#include<iostream>
//#include<string>
//using std::string;
//class Hero {
// private:
//  string* character = new string("UNKNOWN");
//
// public:
//  ~Hero() {
//    delete character;
//    character = nullptr;
//  }
//  Hero(string s_) { *character = s_; }
//  Hero() : Hero("modesty"){};
//  Hero(const Hero& h_) { *character = *(h_.character); }
//
//  //���ظ�ֵ�����
//  Hero& operator=(const Hero& h_) {
//    *character = *(h_.character);
//    return *this;
//  }
//
//  string getCharacter() { return *character; }
//};
//
//int main() {
//  Hero ezio{"proud"}, altair{};
//  std::cout << ezio.getCharacter();
//  ezio = altair;
//  std::cout << ezio.getCharacter();
//  return 0;
//}