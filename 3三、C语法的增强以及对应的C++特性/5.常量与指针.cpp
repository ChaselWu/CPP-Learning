//1.constant
/*
    1)声明后不可更改的量
  //const int a = 10;
    2)命名常量:如果数据有名字，该名字即为命名常量：a
    3)如果该数据从字面上看就能知道它的值，则称之为字面常量：10
    4)编码规范：符号常量必须全部大写并用下划线分隔单词：MAX_ITERATIONS,COLOR_RED,PI
*/

//2.常量指针 指针常量 常量指针常量
/*
    {常函数：
        形式为<type><function>(pramater)const,表明该函数不会对这个类对象的数据成员做任何改变
    }
*/
//3.using, typedef & #define
/*  1)using声明新的类型名称：
        在使用const unsigned int*时觉得麻烦，C风格的处理方法
            //typedef const unsigned int* MyPionter
            //MyPionter p{nullptr};
        使用using：
            //using ConPointer* = const unsigned int*
            //ConPointer p{nullptr};
    2)编码规范：代表类型名的名字必须首字母大写并且大小写混合
*/
