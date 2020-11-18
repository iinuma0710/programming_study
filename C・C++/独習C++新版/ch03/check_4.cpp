#include <iostream>


class A
{
    int private_val = 77;
    friend void show(const A& a);
};

void show(const A& a)
{
    std::cout << a.private_val << std::endl;
}


int main()
{
    A aa;
    show(aa);
}