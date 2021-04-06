//1.string
/*
    1)函数：（string类有接近一百个函数，以下是简单的分类）
        构造
        追加 append
        赋值 assign
        替换 repalace
        位置 at
        清除 clear
        删除 erase
        长度 length/size
        容量 capacity
        为空 empty
        比较 compare
             copy
             swap
        转字符数组 data
        子串 substr
        搜索 find
        插入 insert
        运算符
    2）index，n
    3）创建string对象
        string maessage{"Aloha World"};
        char charArray[] = {'a', 'l', 'o'};
        string message1{charArray};
    4）追加字符串append
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
    5）assign
        类似append
    6）at(index);
       clear();
       erase(index,n);
       empty();//检测是否为空
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
    7）campare(str)
        字典序相减,前减后
    8）substr(index,n)
       substr(index)//默认到end
    9）find
       find(str);
       find(str,index)//默认到end
       find(char);
    10）insert
        insert(index,str);
        insert(index,count,char);
    11）replace
        replace(index,n,str);
    12）字符串运算符
        []用数组下标访问字符串中的字符
        = 赋值（复制）
        + 连接两个字符串得到一个新串
        +=将一个字符串追加到另一个末尾
        <<将一个字符串插入一个流
        >>从一个流提取字符串，分界符为空格或者空结束符
        == != < <= > >= 字符串比较

*/

//2.std::array
/*
    1）C style array:
        arr会退化为指针
        不知道自己的大小（sizeof()/sizeof()）
        两个数组无法直接赋值
        不能自动推断类型 auto a1[]={1,2,3}//error
    2）C++ style array
        是一个容器类，有迭代器（可以认为是用于访问成员的高级指针）
        可直接赋值
        知道自己的大小
        能和另一数组交换内容 swap
        能以指定值填充自己 fill
        取某个位置的元素做越界检查 at
    3）创建syntax:
        #include <array>
        std::array <typeName, size> arrayName {value};
    4）C++17引入了对类模板的参数进行推导的新特性
        //std::array a1{1, 2, 3};
    5）std::array的成员函数
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