//1.如果要修改广义集合中的元素，那么必须将元素名变量定义为引用类型
    //#include <iostream>
    //using std::cout;
    //using std::endl;
    //int main() {
    //  int arr[]{43, 54, 67, 87, 53, 4, 2, 6, 75, 4};
    //  for (auto i : arr) {
    //    i++;
    //    cout << i << endl;  // i值在内部被修改了，但在外部没有
    //  }
    //  return 0;
    //}

//2.syntax
/*
    1）for(元素名变量:广义集合){循环体}
        1.1）元素名变量
            可以是reference，以便修改广义集合的值
            可以是const，以免修改
        1.2）广义集合
            range 一些元素组成的一个整体，如：
                //#include<iostream>
                //#include<array>
                //#include<vector>
                //#include<string>
                //int main() {
                //  int arr[]{1, 2, 3, 4, 5};
                //  std::array<int, 4> arr2{2, 4, 6, 8};
                //  std::vector<int> v = {42, 7, 5};
                //  std::vector<std::string> s = {"aloha", "world"};
                //}

*/























