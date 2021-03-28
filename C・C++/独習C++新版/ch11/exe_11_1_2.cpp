#include <iostream>
#include <typeinfo>

class Base
{
public:
    virtual ~Base() { }
};

class Derived : public Base { };

void check_rtti(const Base& base)
{
    if (typeid(base) == typeid(Derived)) {
        std::cout << "base は Derived 型です" << std::endl;
    } else {
        std::cout << "base は Derived 型ではありません" << std::endl;
    }
}

int main()
{
    Base base;
    check_rtti(base);

    Derived derived;
    check_rtti(derived);
}