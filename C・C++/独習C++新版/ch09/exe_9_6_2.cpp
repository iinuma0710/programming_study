#include <iostream>

template <auto i>
void show_nttp()
{
    std::cout << i << std::endl;
}

int main()
{
    show_nttp<0>();
}