#include <iostream>
#include <typeinfo>

class Base
{
public:
    virtual ~Base() {}

    // virtual でないメンバ関数
    const char* get_class_name() const { return "Base"; }
};

class Derived : public Base
{
public:
    const char* get_class_name() const { return "Derived"; }
};

class MoreDerived : public Derived
{
public:
    const char* get_class_name() const { return "MoreDerived"; }
};

int main()
{
    Derived d; // 実際のオブジェクトはDerived型

    Base& rb = d; // Base型への参照にする

    // Base 型への参照なので，Base 型のめんが関数が呼ばれる
    std::cout << rb.get_class_name() << std::endl;

    try
    {
        Derived& rd = dynamic_cast<Derived&>(rb);   // Base 型から Derived 型へキャストする

        // キャスト成功
        // Derived 型へのポインタなので，Derived 型のめんが関数が呼ばれる
        std::cout << rd.get_class_name() << std::endl;
    }
    catch(std::bad_cast& bc)
    {
        // キャスト失敗
        // nullpty が返ってくる
        std::cout << "dynamic_cast 失敗" << std::endl;
    }

    try
    {
        MoreDerived& rmd = dynamic_cast<MoreDerived&>(rb);   // Base 型から Derived 型へキャストする

        std::cout << rmd.get_class_name() << std::endl;
    }
    catch(std::bad_cast& bc)
    {
        std::cout << "dynamic_cast 失敗" << std::endl;
    }
}