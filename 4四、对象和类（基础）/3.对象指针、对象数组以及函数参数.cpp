//1.����ָ���붯̬����
/*
    1����ָ����ʶ����Ա
        ����ָ�����ָ���µĶ�����
    2���ڶ��д�������

*/

//2.��������

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



//3.������Ϊ��������
/*
    1)pass by value
    2)pass by reference
    3)pass by pointer
*/


//#include"Human.h"
//void higher1(Human guy,double deltaH) {//�޷�higher
//  guy.setHeight((guy.getHeight())+deltaH);
//  return;
//}
//void higher2(Human& guy, double deltaH) {//����higher
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


//4.����ָ����Ϊ��������ֵ
/*
    1)а����÷������������Դ��������ʵ�ֵķ��ض���
*/
//#include"Human.h"
//Human* getPoH(/*��д������*/) {//���ص�������ʵ�������ɵĶ����ָ��
//  Human* p = new Human{};//�����new����ôreturn��ָ��ָ����Ǹ�������ں���ִ�����ɾȥ������ʧ
//  return p;
//}
//int main() {
//  Human* pAlice = getPoH();
//  std::cout << pAlice->getName();
//  delete pAlice;//�˷�����а��֮����ÿ��һ�κ�����Ҫ�����Ա����delete
//  pAlice = nullptr;
//  return 0;
//}
/*
    2)��ȷ���÷���
*/
//#include "Human.h"
//Human* getPoH(Human* p /*,��������*/) {/*���ú���ǰ�����Լ�newһ��Ĭ�ϵĶ�����ڶ��ϣ��ٰ��������
//                                   ��ָ�봫������ƾ�����ָ����ԶԶ��ϵĶ�������޸ģ�Ȼ���ٷ���
//                                   ���ָ�룬���Ǿ��ڶ��ϵõ�����һ������getPoH�����߼��Ķ���ͬ
//                                   ʱ������ϣ�����봫����pû���κθı䣬���������const����*/
//  *p=Human{};
//  return p;
//}
//int main() {
//  Human* pNULL = new Human{};//�Լ�new���Լ�delete
//  Human* pAlice = getPoH(pNULL);
//  std::cout << pAlice->getName();
//  delete pNULL;
//  pNULL = nullptr;
//  return 0;
//}
/*
    ����������const���κ�������ֵ���ͺͲ���
    ʵ����const Human* getPoH(const Human* p,......){};
*/

//5.����������Ϊ��������ֵ
/*
    {֮���Բ�ֱ�ӷ��ض�����Ϊ�����Ч��}
    1)а����÷���
*/
//#include"Human.h"
//Human& getH() {
//  Human h{};/*h���ں������ڴ����ģ�h��ջ�ϣ�����ִ����Ϻ�ͱ�ɾ���ˣ����������ϵı���ͨ��������������
//            ��Ȼû����*/
//  return h;
//}
//int main() {
//  Human alice = getH();//���������������ڻ�û���֣�vsֻ����warning�����������ڳ���
//
//  return 0;
//}
/*
    2)���е��÷���
*/
//#include"Human.h"
////the 1st way
//const Human& getH1(Human& o) {//ע��const����o�ǲ��еģ���Ϊ���ص�oӦ����Ҫ�ں���������һЩ�ı��
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

/*{�����߽����⣺
    C++�Ĳ�������������������ĸ���ֻ����������ֵ�ʹ�����
*/
