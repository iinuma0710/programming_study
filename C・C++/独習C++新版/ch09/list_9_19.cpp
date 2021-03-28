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
    // B だけを float 指定したくても，そのままでは A も指定しなければならない 
    std::cout << fused_multiply_add<float, float>(1.23456f, 2, 3) << std::endl;

    // 引数の方をキャストして型推論させても良い 
    std::cout << fused_multiply_add(1.23456f, static_cast<float>(2), 3) << std::endl;
}