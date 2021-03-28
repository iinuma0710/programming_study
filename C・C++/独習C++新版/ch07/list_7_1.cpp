#include <iostream>

class Base
{
// 被保護メンバ
protected:
    void protected_member()
    {
        std::cout << "Base::protected_member()" << std::endl;
    }
};

class Derived : private Base    // private で派生
{
public:
    void member_test();
};

void Derived::member_test()
{
    // OK．
    protected_member();
}

int main()
{
    Derived derived;
    
    // エラー．被保護メンバは外部からアクセスできない．
    // derived.protected_member();

    // OK．公開メンバを経由しているのでアクセスできる．
    derived.member_test();
}