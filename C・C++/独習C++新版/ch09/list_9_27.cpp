#include <iostream>

struct vector2d
{
    using value_type = float;

    float x;
    float y;
};

template <typename Vector>
Vector::value_type  // 依存名：テンプレート引数に依存してしまう
dot_product(const Vector& lhs, const Vector& rhs)
{
    return lhs.x * rhs.x + lhs.y * rhs.y;
}

int main()
{
    vector2d a{10, 20};
    vector2d b{30, 40};

    dot_product<vector2d>(a, b);
}