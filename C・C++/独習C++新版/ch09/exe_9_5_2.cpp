#include <iostream>

template <typename T>
void show_val(T val)
{
    std::cout << val << std::endl;
}

int main()
{
    show_val(42);

    show_val(3.1415);
}