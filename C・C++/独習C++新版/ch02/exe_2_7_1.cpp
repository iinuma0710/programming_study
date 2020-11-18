#include <iostream>

void show_value(int a)
{
    std::cout << a << std::endl;
}

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

int sum(int a, int b, int c)
{
    int d = a + b + c;
    return d;
}

int sum(int a, int b, int c, int d)
{
    int e = a + b + c + d;
    return e;
}

int main()
{
    int x = sum(10, 20);
    std::cout << x << std::endl;

    int y = sum(10, 20, 30);
    std::cout << y << std::endl;

    int z = sum(10, 20, 30, 40);
    std::cout << z << std::endl;

}