//1.名字空间的概念

//2.using namespace std的害处
/*
    可考虑:

        1）替换为
        using std::cout;
        using std::endl;

        2）直接用std::cout

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