#include <iostream>

class A
{
public:
    void foo() { std::cout << "A::foo()" << std::endl; }
};

class B
{
    A a;

public:
    // メンバ変数の a を返す変換関数
    operator A＆() { return a; }
};

int main()
{
    B b;
    // エラー．B は foo というメンバ関数を持たない
    b.foo()
}