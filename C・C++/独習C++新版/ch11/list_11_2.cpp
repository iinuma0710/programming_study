#include <iostream>
#include <typeinfo>

class Base {};

class Derived : public Base {};

class Composed { Base base; };

int main()
{
    if (typeid(Base) == typeid(Derived))
    {
        std::cout << "Base と Derived は同じクラスです" << std::endl;
    } else {
        std::cout << "Base と Derived は異なるクラスです" << std::endl;
    }

    if (typeid(Base) == typeid(Composed))
    {
        std::cout << "Base と Composed は同じクラスです" << std::endl;
    } else {
        std::cout << "Base と Composed は異なるクラスです" << std::endl;
    }
}