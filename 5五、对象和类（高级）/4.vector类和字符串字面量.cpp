//1.vector class
/*
    1����array�Ƚϣ�
        array������С���ɱ䣬��vector�����������Զ�����
    2�����ݣ�
        vector<dataType>();//ctor
        void push_back(dataType);//��β��׷��Ԫ��
        void pop_back();//ɾ��β��Ԫ��
        unsigned int size();//����Ԫ������
        dataType at();
        dataType operator [int index];
        bool empty();
        void clear();
        void swap(vector);
        itarator erase(iterator pos);
        itarator insert(const_iterator pos,const T&);
        {iterator������}
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
//  //vector�еĵ���������ctor
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

//4.�ַ���������
/*
    1��C++11���ַ���������
        syntax��
            R"delimeter(raw_characters)delimeter"
    2��C++14�������""s����������
        auto s1="hello";//const char*
        auto s2="hello"s;//std::string
*/
//#include <iostream>
//#include <string>
//using namespace std::string_literals;//����ʹ��""s
//int main() {
//  std::string s1 = "Hello\0World";//��\0ֹͣд��
//  auto s2 = "Hello\0World"s;
//  std::cout << s1.size() << s2.size() << std::endl << s1;
//  return 0;
//}