#include <iostream>

// 関数テンプレートでの積和演算
template <typename T> T fused_multiply_add(T a, T b, T c)
{
    T r = a * b + c;
    return r;
}

class Integer
{
    int value;

public:

    // 加減算のみ用意する
    friend Integer operator+(Integer lhs, Integer rhs)
    {
        return Integer{lhs + rhs};
    }

    friend Integer operator-(Integer lhs, Integer rhs)
    {
        return Integer{lhs - rhs};
    }

    int get_value() const { return value; }
};

int main()
{
    // Integer で実体化して呼び出そうとしても乗算がないのでエラー
    std::cout << fused_multiply_add<Integer>(1, 2, 3).get_value() << std::endl;
}
