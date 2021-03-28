#include <iostream>

class Base
{
public:
    ~Base()
    {
        std::cout << "Base::~Base()" << std::endl;
    }
};

class Derived
{
public:
    ~Derived()
    {
        std::cout << "Derived::~Derived()" << std::endl;
    }
};

Base* allocate()
{
    // 派生クラスを動的確保するが，関数の戻り値の方が基底クラスへのポインタになっているので，
    // 暗黙変換によって基底クラスへのポインタが返される
    return new Derived{};
}

int main()
{
    auto ptr = allocate();  // 基底クラスへのポインタが返される
    delete ptr; // コンパイルは通るが問題のあるコード
}