#include <iostream>

template <typename T, typename U>
class A
{
public:
    explicit A(T t, U u) {}
};

void show(const A<int, const char*>& a)
{
    std::cout << "A<int, const char*>" << std::endl;
}

int main()
{
    A a{ 10, "Hello, deduction" };
    show(a);
}