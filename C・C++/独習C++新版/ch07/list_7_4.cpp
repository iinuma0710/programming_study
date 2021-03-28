#include <iostream>

class Base
{
public:
    void method_Base();
};

void Base::method_Base()
{
    std::cout << "Base::method_Base()" << std::endl;
}

class Derived : public Base
{
public:
    void method_Derived();
};

void Derived::method_Derived()
{
    std::cout << "Derived::method_Derived()" << std::endl;
}

int main()
{
    Derived derived;

    // OK．Derived は Base のメンバ関数を継承しているので呼び出せる．
    derived.method_Base();

    // OK．Derived のメンバ関数も呼び出せる
    derived.method_Derived();

    // 基底クラスへの参照は派生クラスからも作ることができる
    Base& base = derived;

    // OK．Base のメンバ関数へは Base の参照からたどることができる．
    base.method_Base();

    // エラー．派生クラスのメンバには基底クラスからたどることはできない．
    // base.method_Derived();

    // エラー．基底クラスから派生クラスへの参照は作れない．
    // Derived& r = base;
}