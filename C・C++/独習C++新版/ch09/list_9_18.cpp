#include <iostream>

// A，B，C がそれぞれ違う型だと，戻り値の型が分かりづらい
// auto 指定しておけば return 文から戻り値の型を推論してくれる
template <typename R, typename A, typename B, typename C>
R fused_multiply_add(A a, B b, C c)
{
    return static_cast<R>(a * b + c);
}

int main()
{
    // R と A だけを明示的に指定して，残りは型推論に任せる
    std::cout << fused_multiply_add<float, double>(1.23456, 2, 3.1415f) << std::endl;
}