//1.string
/*
    1)��������string���нӽ�һ�ٸ������������Ǽ򵥵ķ��ࣩ
        ����
        ׷�� append
        ��ֵ assign
        �滻 repalace
        λ�� at
        ��� clear
        ɾ�� erase
        ���� length/size
        ���� capacity
        Ϊ�� empty
        �Ƚ� compare
             copy
             swap
        ת�ַ����� data
        �Ӵ� substr
        ���� find
        ���� insert
        �����
    2��index��n
    3������string����
        string maessage{"Aloha World"};
        char charArray[] = {'a', 'l', 'o'};
        string message1{charArray};
    4��׷���ַ���append
*/
#include <iostream>
#include<string>
//using std::string;
//using std::endl;
//int main() {
//  string s1{"welcome"}, s2{s1}, s3{s1}, s4{s1};
//  s1.append("to C++");
//  s2.append("to C and C++", 3, 5);
//  s3.append("to C and C++", 6);
//  s4.append(2, 'G');
//  std::cout << s1 << endl << s2 << endl << s3 << endl << s4;
//  return 0;
//}
/*
    5��assign
        ����append
    6��at(index);
       clear();
       erase(index,n);
       empty();//����Ƿ�Ϊ��
*/
#include<iostream>
#include<string>

//int main() {
//  std::string s1{"I'm you "};
//  s1.erase(2, 3);
//  std::cout << s1<<std::endl<<s1.empty()<<std::endl;
//  s1.clear();
//  std::cout << s1 << s1.empty();
//  return 0;
//}
  /*
    7��campare(str)
        �ֵ������,ǰ����
    8��substr(index,n)
       substr(index)//Ĭ�ϵ�end
    9��find
       find(str);
       find(str,index)//Ĭ�ϵ�end
       find(char);
    10��insert
        insert(index,str);
        insert(index,count,char);
    11��replace
        replace(index,n,str);
    12���ַ��������
        []�������±�����ַ����е��ַ�
        = ��ֵ�����ƣ�
        + ���������ַ����õ�һ���´�
        +=��һ���ַ���׷�ӵ���һ��ĩβ
        <<��һ���ַ�������һ����
        >>��һ������ȡ�ַ������ֽ��Ϊ�ո���߿ս�����
        == != < <= > >= �ַ����Ƚ�

*/

//2.std::array
/*
    1��C style array:
        arr���˻�Ϊָ��
        ��֪���Լ��Ĵ�С��sizeof()/sizeof()��
        ���������޷�ֱ�Ӹ�ֵ
        �����Զ��ƶ����� auto a1[]={1,2,3}//error
    2��C++ style array
        ��һ�������࣬�е�������������Ϊ�����ڷ��ʳ�Ա�ĸ߼�ָ�룩
        ��ֱ�Ӹ�ֵ
        ֪���Լ��Ĵ�С
        �ܺ���һ���齻������ swap
        ����ָ��ֵ����Լ� fill
        ȡĳ��λ�õ�Ԫ����Խ���� at
    3������syntax:
        #include <array>
        std::array <typeName, size> arrayName {value};
    4��C++17�����˶���ģ��Ĳ��������Ƶ���������
        //std::array a1{1, 2, 3};
    5��std::array�ĳ�Ա����
        at
        operator[]
        front
        back
        data
        empty
        size
        max_size
        fill
        swap
        beginc
        beginin
        endc
        end
        rbeginc
        rbegin
        rendc
        rend
*/