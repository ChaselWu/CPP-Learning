//1.vector class
/*
    1）与array比较：
        array容量大小不可变，而vector对象容量可自动增大
    2）内容：
        vector<dataType>();//ctor
        void push_back(dataType);//在尾部追加元素
        void pop_back();//删除尾部元素
        unsigned int size();//返回元素总数
        dataType at();
        dataType operator [int index];
        bool empty();
        void clear();
        void swap(vector);
        itarator erase(iterator pos);
        itarator insert(const_iterator pos,const T&);
        {iterator迭代器}
*/
//#include<iostream>
//#include<vector>
//int main() {
//  std::vector<int> vec{1, 2, 3, 4, 5};
//  vec.push_back(6);
//  std::cout << vec[5];
//  vec.pop_back();
//  std::cout << vec.size();
//  vec.erase(vec.end() - 1);
//  std::cout << vec.size();
//  for (std::vector<int>::iterator i = vec.begin(); i != vec.end(); i++) {
//    std::cout << *i << " ";
//  }
//  std::cout << std::endl;
//
//  //vector中的迭代器拷贝ctor
//  std::vector<int> vec2(vec.begin(), vec.end());
//  for (std::vector<int>::iterator i = vec.begin(); i != vec.end(); i++) {
//    std::cout << *i << " ";
//  }
//  std::cout << std::endl;
//
//  //cp ctor
//  std::vector<int> vec3(vec2);
//  return 0;
//}

//4.字符串字面量
/*
    1）C++11生字符串字面量
        syntax：
            R"delimeter(raw_characters)delimeter"
    2）C++14将运算符""s进行了重载
        auto s1="hello";//const char*
        auto s2="hello"s;//std::string
*/
//#include <iostream>
//#include <string>
//using namespace std::string_literals;//可以使用""s
//int main() {
//  std::string s1 = "Hello\0World";//遇\0停止写入
//  auto s2 = "Hello\0World"s;
//  std::cout << s1.size() << s2.size() << std::endl << s1;
//  return 0;
//}