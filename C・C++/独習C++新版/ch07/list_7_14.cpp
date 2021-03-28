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

    // これまで通り問題なく呼び出せる
    more_derived.method_DerivedA();
    more_derived.method_DerivedB();
    more_derived.method_MoreDerived();

    // 曖昧さが解消され，呼び出せるようになる
    more_derived.method_Base();

    // 曖昧さが解消され，参照を取得できるようになる
    Base& base = more_derived;
}