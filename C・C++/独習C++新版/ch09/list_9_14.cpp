#include <iostream>

// A，B，C がそれぞれ違う型だと，戻り値の型が分かりづらい
// auto 指定しておけば return 文から戻り値の型を推論してくれる
template <typename A, typename B, typename C>
auto fused_multiply_add(A a, B b, C c)
{
    return a * b + c;
}

int main()
{
    std::cout << fused_multiply_add<double, int , float>(1.23456, 2, 3.1415f) << std::endl;
}