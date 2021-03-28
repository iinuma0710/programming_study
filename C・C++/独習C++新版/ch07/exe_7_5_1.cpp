#include <iostream>

class BaseA
{
public:
    void method_BaseA()
    {
        std::cout << "BaseA::method_BaseA()" << std::endl;
    }
};

class BaseB
{
public:
    void method_BaseB()
    {
        std::cout << "BaseB::method_BaseB()" << std::endl;
    }
};

// 多重継承
class Derived : public BaseA, public BaseB
{
public:
    void method_Derived()
    {
        std::cout << "Derived::method_Derived()" << std::endl;
    }
};

int main()
{
    Derived derived;
    derived.method_BaseA();     // BaseA から継承したメンバ関数の呼び出し
    derived.method_BaseB();     // BaseB から継承したメンバ関数の呼び出し
    derived.method_Derived();   // Derived で定義したメンバ関数の呼び出し
}