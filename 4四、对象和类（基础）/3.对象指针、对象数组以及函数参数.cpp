//1.对象指针与动态对象
/*
    1）用指针访问对象成员
        对象指针可以指向新的对象名
    2）在堆中创建对象

*/

//2.对象数组

//#include"Human.h"
//using std::cout;
//using std::endl;
//int main() {
//  Human chriss{};
//  Human* pChriss = &chriss;
//  cout << pChriss->getName()<<endl;
//
//
//
//  Human* pAndy = new Human{};
//  Human* pAvanger = new Human[42];
//
//  delete pAndy;
//  pAndy = nullptr;
//  delete[] pAvanger;
//  pAvanger = nullptr;
//
//
//  return 0;
//}



//3.对象作为函数参数
/*
    1)pass by value
    2)pass by reference
    3)pass by pointer
*/


//#include"Human.h"
//void higher1(Human guy,double deltaH) {//无法higher
//  guy.setHeight((guy.getHeight())+deltaH);
//  return;
//}
//void higher2(Human& guy, double deltaH) {//可以higher
//  guy.setHeight((guy.getHeight()) + deltaH);
//  return;
//}
//int main() {
//  Human haily{};
//  std::cout << haily.getHeight() << std::endl;
//  higher1(haily, 10.0);
//  std::cout << haily.getHeight() << std::endl;
//  higher2(haily, 10.0);
//  std::cout << haily.getHeight() << std::endl;
//  return 0; }


//4.对象指针作为函数返回值
/*
    1)邪恶的用法：（但可以以此明白如何实现的返回对象）
*/
//#include"Human.h"
//Human* getPoH(/*不写参数了*/) {//返回的内容事实上是生成的对象的指针
//  Human* p = new Human{};//如果不new，那么return的指针指向的那个对象会在函数执行完后删去，对象丢失
//  return p;
//}
//int main() {
//  Human* pAlice = getPoH();
//  std::cout << pAlice->getName();
//  delete pAlice;//此方法的邪恶之处，每用一次函数，要求程序员自行delete
//  pAlice = nullptr;
//  return 0;
//}
/*
    2)正确的用法：
*/
//#include "Human.h"
//Human* getPoH(Human* p /*,其他参数*/) {/*调用函数前，先自己new一个默认的对象放在堆上，再把这个对象
//                                   的指针传进来，凭借这个指针可以对堆上的对象进行修改，然后再返回
//                                   这个指针，我们就在堆上得到到了一个经过getPoH函数逻辑的对象。同
//                                   时，我们希望传入传出的p没有任何改变，所以最好用const修饰*/
//  *p=Human{};
//  return p;
//}
//int main() {
//  Human* pNULL = new Human{};//自己new，自己delete
//  Human* pAlice = getPoH(pNULL);
//  std::cout << pAlice->getName();
//  delete pNULL;
//  pNULL = nullptr;
//  return 0;
//}
/*
    另：尽可能用const修饰函数返回值类型和参数
    实践：const Human* getPoH(const Human* p,......){};
*/

//5.对象引用作为函数返回值
/*
    {之所以不直接返回对象，是为了提高效率}
    1)邪恶的用法：
*/
//#include"Human.h"
//Human& getH() {
//  Human h{};/*h是在函数体内创建的，h在栈上，函数执行完毕后就被删除了，而主函数上的变量通过别名来找他就
//            自然没有了*/
//  return h;
//}
//int main() {
//  Human alice = getH();//而且这个错误编译期还没发现，vs只给了warning，但在运行期出错
//
//  return 0;
//}
/*
    2)可行的用法：
*/
//#include"Human.h"
////the 1st way
//const Human& getH1(Human& o) {//注：const修饰o是不行的，因为返回的o应该是要在函数体内做一些改变的
//  o = Human{};
//  return o;
//}
////the 2nd way??????????????????????????????????????????????????????????????????????????
//class Life {
//   Human o{};
//  const Human& getH2(){
//      this->o = Human{};
//      return this->o;
//  }
//};
//int main() {
//  Human nobody{};
//  Human alice = getH1(nobody);
//  return 0;
//}

/*{附：高阶问题：
    C++的参数传递问题中有意义的概念只有两个，传值和传引用
*/
