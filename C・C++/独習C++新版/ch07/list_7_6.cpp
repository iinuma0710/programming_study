#include <iostream>

class Base
{
public:
    virtual void method();
};

void Base::method()
{
    // 派生クラスから呼び出されることが期待される
    std::cout << "Base::method()" << std::endl;
}

class Derived : public Base
{
public:
    // Base::method() をオーバライド
    void method() override;
};

void Derived::method()
{
    std::cout << "Derived::method()" << std::endl;
    Base* base = this;  // 基底クラスへのポインタを取得
    base->method();     // 基底クラスのメンバを呼んでいるつもり
}

int main()
{
    Derived derived;
    derived.method();   // オーバライドしたメンバ関数の呼び出し
}