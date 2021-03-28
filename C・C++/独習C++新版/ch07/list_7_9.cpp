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

    BaseA&  base_a = derived;   // Derived は BaseA の派生クラスなので BaseA として扱える

    // エラー．BaseA の参照を使っているので，BaseB のメンバ関数を呼び出せない
    // base_a.method_BaseB();
    
    // エラー．同様に Derived ではないので呼び出せない
    // base_a.method_Derived();

    BaseB&  base_b = derived;   // Derived は BaseB の派生クラスなので BaseB として扱える
    // base_a.method_BaseB();   // エラー．
    // base_a.method_Derived(); // エラー．
}