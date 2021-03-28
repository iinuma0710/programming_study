#include <iostream>
#include <utility>

void show(int& ref)
{
    std::cout << "参照" << ref << std::endl;
}

void show(int&& rref)
{
    std::cout << "右辺値参照" << rref << std::endl;
}

int main()
{
    int i = 0;

    show(i);

    show(std::move(i));
}