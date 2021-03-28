#include <iostream>

class Base
{
public:
    Base()
    {
        std::cout << "Base デフォルトコンストラクタ" << std::endl;
    }

    explicit Base(int i)
    {
        std::cout << "A 引数つきコンストラクタ：" << i << std::endl;
    }
};

class Derived : public Base
{
public:
    explicit Derived(int i) : Base{i} {}
};

int main()
{
    Derived derived{42};
}