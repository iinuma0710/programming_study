#include <iostream>

// 関数テンプレートでの積和演算
template <typename T> T fused_multiply_add(T a, T b, T c)
{
    T r = a * b + c;
    return r;
}

int main()
{
    // int で実体化して呼び出し
    std::cout << fused_multiply_add<int>(1, 2, 3) << std::endl;

    // float で実体化して呼び出し
    std::cout << fused_multiply_add<float>(1.23456f, 1.23456f, 1.23456f) << std::endl;

    // double で実体化して呼び出し
    std::cout << fused_multiply_add<double>(1.23456, 1.23456, 1.23456) << std::endl;
}
