//1.���õĶ���
/*
    ���þ�����һ�������ı���
*/

//2.�������õķ���
/*
    1)int x;
      int& rx=x;

    2)int x, & rx=x;

    {
    Coding Conventions:
        51.C++ָ�������÷���Ӯ���������Ͷ�������
    }
*/

    //3.���õ�����
/*
    1)ͨ�����������Ķ�д����ʵ������������ԭ������
    2)���ñ�����������ʱ���ʼ��
    3)����һ����ʼ�����������־Ͳ�����ָ������������
*/

//4.���������������Ĳ��������ô���
   //���ӣ�
//#include<iostream>
//using namespace std;
//
//void swap_by_value(int x, int y) {
//    int temp = x; x = y; y = temp;
//}
//void swap_by_pointer(int* p1, int* p2) {
//    int temp = *p1; *p1 = *p2; *p2 = temp;
//}
//void swap_by_reference(int& rx, int& ry) {
//    int temp = rx; rx = ry; ry = temp;
//}
//
//int main() {
//    int a = 10, b = 5;
//    cout << "before:a=" << a << "   b=" << b << endl;
//
//    swap_by_value(a, b);
//    cout << "swap by value:a=" << a << "   b=" << b << endl;
//
//    a = 10; b = 5;
//    swap_by_pointer(&a, &b);
//    cout << "swap by pointer:a=" << a << "   b=" << b << endl;
//
//    a = 10; b = 5;
//    swap_by_reference(a, b);
//    cout << "swap by reference:a=" << a << "   b=" << b << endl;
//    return 0;
//}


//5.ʾ������
//#include<iostream>
//using namespace std;
//
//int main() {
//    int x = 0;
//    int y{ 10 };
//    int& rx = x;
//    rx = 8;
//
//    const char* s = "Hello";
//    const char* t = "World";
//
//    const char*& r = s;
//    r = t;
//    cout << r << endl;
//    cout << s << endl;
//
//    cout << x << endl;
//
//    cin.get();
//    return 0;
//}

//6.��������


//7.nullptr��ָ��
/*
    1)0�����Ķ���������
    2)C++��׼��ίԱ��ϣ������ָ�롱��һ��ȷ���Ķ�����
        C++11���뱣���֡�nullptr����Ϊ��ָ��
*/

//8.Dynamic Memory Management:Allocate/Release��̬�ڴ��������/�ͷ�
/*
    1)C++��ͨ�������new���붯̬�ڴ棬�ɹ�����ָ�������ڴ�ĵ�ַ��ʧ�����׳��쳣���߷��ؿ�ָ��
        //new ������(��ֵ);
        //new ������[�������ʽ];

    2)��̬�ڴ�ʹ����Ϻ�ʹ��delete��������ͷ�
        //delete ָ����;
        //delete[] ָ����;
        //ָ���� = nullptr;//ɾ�����ǿռ䣬����ָ�벢û��ɾ���������������ָ����һ���ռ�

    {�ڴ�������
        ջ
        �ѣ��ֶ�������ڴ�
        ��̬�����洢��̬������ȫ�ֱ���
        ������
    }

    3)���ӣ�
*/
//#include <iostream>
//using namespace std;
//
//int main() {
//    int* p = nullptr;
//    int* q{ nullptr };
//
//    p = new int(42);
//    q = new int[4];
//
//    cout <<"Before:*p="<< *p<<endl;
//    *p = 24;
//    cout << "After:*p=" << *p << endl;
//
//    for (int i = 0; i < 4; i++) {
//        *(q + i) = 10 + i;
//        cout << *(q + i) << endl;
//    }
//    delete p;
//    delete[]q;
//
//
//    return 0;
//}
