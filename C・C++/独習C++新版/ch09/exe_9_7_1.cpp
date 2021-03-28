#include <iostream>

template <typename T>
void show_val(const T& val)
{
    std::cout << val << std::endl;
}

int main()
{
    const int i = 0;
    show_val(i);
}