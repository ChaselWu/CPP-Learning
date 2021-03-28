//1. ��д��Circle�� 2. ��д������������ std::array
//    ��������10�������Circle���鲢��ʼ���� 3. �û��ڷ�Χ��forѭ������Circle���飬��10��Circie����
// �����֮�ͣ�10�֣�
//        ��Ŀ���ݣ�
//
//            ��Circle���������캯�����޲ι��캯��û�к����壬ʹ��default�ؼ����������вι��캯����
// ��һ��double���Ͳ�����ΪCircle�İ뾶��Circle��İ뾶��Ĭ��ֵ��1 .0
//
//    ��Circle��һ�� double
//    getArea() ����������Բ�������Բ���ʵ�ֵȡ 3.14
//
//    ������������ std::array
//    ����һ����10��Circle��������顣����ǰ5��Circle����İ뾶�ֱ�����Ϊ1
//    .0��2.0��3.0��4.0��5.0����5������ʹ��Circle��Ĭ�Ϲ��캯����ʼ����
//
//    ���������У��û��ڷ�Χ��forѭ������Circle���飬��10��Circie��������֮��
//
//    ���������У���������������͡�������Ϊ˫���ȸ�������ʹ��ϵͳĬ�Ͼ��ȡ���������ʽ�;��ȿ���
#include<iostream>
#include<array>
using std::array;

class Circle {
 private:
  double rad=1.0;

 public:
  Circle()=default;
  Circle(double r_) : rad{1.0} { rad = r_; }
  double getArea() { return 3.14 * rad * rad;}
};

int main() {
  array<Circle, 10> circles{1.0, 2.0, 3.0, 4.0, 5.0, {}, {}, {}, {}, {}};
  double ans = 0;
  for (auto i : circles) {
    ans += i.getArea();
  }
  std::cout << ans;
  return 0;
}