#include <iostream>

template <typename T, typename U, typename V>
class A
{
public:
    A() { std::cout << "プライマリーテンプレート" << std::endl; }
};

template <typename T, typename U>
class A<T, U, int>
{
public:
    A() { std::cout << "部分特殊化 A<T, U, int>" << std::endl; }
};

int main()
{
    A<void, int, float> a1;
    A<double, char, int> a2;
}