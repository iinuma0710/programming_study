#include <iostream>

class Base
{

public:
    void show();
};

void Base::show()
{
    std::cout << "Base::show()" << std::endl;
}


class Derived : public Base
{

public:
    // オーバーロード
    using Base::show;
    void show(int val);
};

void Derived::show(int value)
{
    std::cout << "Derived::show(" << value << ")" << std::endl;
}
