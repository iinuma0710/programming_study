#include <iostream>

class Base
{
public:
    virtual void method1()
    {
        std::cout << "Base::method1()" << std::endl;
    }
};

class Derived : public Base
{
public:
    // final 指定
    void method1() final
    {
        std::cout << "Derived::method1()" << std::endl;
    }
};

class MoreDerived : public Derived
{
public:
    // Derived で method1 は final 指定されているのでエラーとなる
    void method1() override
    {
        std::cout << "MoreDerived::method1()" << std::endl;
    }
};