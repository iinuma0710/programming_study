#include <iostream>
#include <utility>

void show(int&& v)
{
    std::cout << v << std::endl;
}

int main()
{
    int i = 42;

    show(std::move(i));
}