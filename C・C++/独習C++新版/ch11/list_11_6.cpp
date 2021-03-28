#include <iostream>

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

    Base* pb = &d; // Base型へのポインターにする

    // Base 型へのポインタなので，Base 型のめんが関数が呼ばれる
    std::cout << pb->get_class_name() << std::endl;

    Derived* pd = dynamic_cast<Derived*>(pb);   // Base 型から Derived 型へキャストする

    if (pd) {
        // キャスト成功
        // Derived 型へのポインタなので，Derived 型のめんが関数が呼ばれる
        std::cout << pd->get_class_name() << std::endl;
    } else {
        // キャスト失敗
        // nullpty が返ってくる
        std::cout << "dynamic_cast 失敗" << std::endl;
    }

    // 実際のインスタンスの型は Derived 型なのでキャストは失敗する
    MoreDerived* pmd = dynamic_cast<MoreDerived*>(pb);

    if (pmd) {
        std::cout << pmd->get_class_name() << std::endl;
    } else {
        std::cout << "dynamic_cast 失敗" << std::endl;
    }
}