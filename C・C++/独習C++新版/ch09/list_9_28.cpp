#include <iostream>

struct vector2d
{
    using value_type = float;

    float x;
    float y;
};

template <typename Vector>
typename Vector::value_type  // typename キーワードで依存名が方であることを明示する
dot_product(const Vector& lhs, const Vector& rhs)
{
    return lhs.x * rhs.x + lhs.y * rhs.y;
}

int main()
{
    vector2d a{10, 20};
    vector2d b{30, 40};

    std::cout << dot_product<vector2d>(a, b) << std::endl;
}