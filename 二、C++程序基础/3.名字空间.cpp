//1.���ֿռ�ĸ���

//2.using namespace std�ĺ���
/*
    �ɿ���:

        1���滻Ϊ
        using std::cout;
        using std::endl;

        2��ֱ����std::cout

*/

namespace car {
    int qq;
}
namespace app {
    int qq;
}

int main() {
    car::qq = 1;
    app::qq = 2;
}