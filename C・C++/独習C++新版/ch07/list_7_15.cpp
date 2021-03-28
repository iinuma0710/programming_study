#include <iostream>

class Base
{
public:
    void method_Base()
    {
        std::cout << "Base: " << this << std::endl;
    }
};

class DerivedA : virtual public Base
{
public:
    void method_DerivedA()
    {
        std::cout << "method_DerivedA: " << this << std::endl;
    }
};

class DerivedB : virtual public Base
{
public:
    void method_DerivedB()
    {
        std::cout << "method_DerivedB: " << this << std::endl;
    }
};

class MoreDerived : public DerivedA, public DerivedB
{
public:
    void method_MoreDerived()
    {
        std::cout << "method_MoreDerived: " << this << std::endl;
    }
};

int main()
{
    MoreDerived more_derived;

    // Base のアドレスがどちらも同じ
    std::cout << "DerivedA" << std::endl;
    DerivedA& derived_a = more_derived;
    derived_a.method_Base();

    std::cout << std::endl;

    std::cout << "DerivedB" << std::endl;
    DerivedA& derived_b = more_derived;
    derived_b.method_Base();
}