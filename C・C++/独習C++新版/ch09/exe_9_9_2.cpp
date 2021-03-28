#include <iostream>

void foo(int a)
{
    std::cout << "foo(" << a << ");" << std::endl;
}

void foo(int a, int b)
{
    std::cout << "foo(" << a << ", " << b << ");" << std::endl;
}

void foo(int a, int b, int c)
{
    std::cout << "foo(" << a << ", " << b << ", " << c << ");" << std::endl;
}

template <typename... T>
void count_params(T... args)
{
    foo(args...);
}

int main()
{
    count_params(0);
    count_params(1, 2);
    count_params(3, 4, 5);
}