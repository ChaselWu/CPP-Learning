//1.继承
/*
    1）基类    派生类
       父类    子类
       超类    子类
    2）继承：子继承父
       泛化：父泛化子
    3）避免一个类被继承的方式：final关键字
*/
//class Hero {
// private:
//  int HP{100};
//};
//class Mage final: public Hero { private:int MP{100}; };

//2.派生类继承的成员
/*
    1）C++11派生类不能继承的特殊函数：
        析构函数&友元函数
    2）可以用一下方式继承基类的构造函数：
        using BaseName::BaseName;//继承基类的所有构造函数
        注：不能仅继承某个指定的基类ctor
    3）用上述方式继承构造函数后，创建derived类实体时调用的是继承的base构造函数
    4）若派生类成员也需要初始化，则可以在派生类构造函数中调用基类构造函数（类似委托构造或列表初始化）
*/
//class Hero {
// private:
//  int HP{100};
//
// public:
//  Hero(int h_) : HP{h_} {}
//  Hero() : Hero(100){};
//  void setHero(int h_) {
//    HP = {h_};
//    return;
//  }
//};
//class Mage final: public Hero {
// private:
//  int MP{100};
//
// public:
//  using Hero::Hero;
//  //Mage(int h_, int m_) : MP{m_} { setHero(h_); }更优雅一点：在派生类构造函数中掉基类构造函数
//  Mage(int h_, int m_) : Hero{h_}, MP{m_} {}
//};

//3.继承中的默认构造函数
/*
    1）若base ctor未被显示调用，基类的默认构造函数就会自动调用。
        如：
          Circle(){r=1;}
        等价于：
          Circle():Shape{}{r=1;}
       因此，base需要提供默认构造函数
    2）编码规范：略
*/

//4.构造链与析构链
/*
    1）构造：父先子后：先是最基类的构造执行
    2）析构：子先父后
*/