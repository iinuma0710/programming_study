#include <iostream>

template <typename T>
void show_val(T&& val)
{
    std::cout << val << std::endl;
}

int main()
{
    const int i = 0;
    show_val(i);
    show_val(1);
}