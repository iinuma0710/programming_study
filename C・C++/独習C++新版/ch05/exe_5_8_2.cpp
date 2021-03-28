#include <iostream>
#include <utility>

class A
{

public:
    A() { }

    A(const A& other)
    {
        std::cout << "コピーコンストラクター" << std::endl;
    }

    A(A&& other)
    {
        std::cout << "ムーブコンストラクター" << std::endl;
    }
};

int main()
{
    A a;
    A c(a); //　コピー
    A m(std::move(a));  // ムーブ
}