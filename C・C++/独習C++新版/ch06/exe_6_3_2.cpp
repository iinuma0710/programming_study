#include <iostream>

class A
{
    int value;

public:
    A& operator++();
    A operator++(int);
};

A& A::operator++()
{
    std::cout << "前置インクリメント" << std::endl;
    return *this;
}

A A::operator++(int)
{
    auto tmp = *this;
    std::cout << "後置インクリメント" << std::endl;
    return tmp;
}
int main()
{
    A a;
    ++a;
    a++;
}