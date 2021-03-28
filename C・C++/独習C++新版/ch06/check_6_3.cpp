#include <iostream>

class Integer
{
    float value = 0;

public:
    Integer() {}
    Integer(float value) : value{value} {}

    friend Integer operator+(Integer lhs, Integer rhs);    // 加算
    friend Integer operator-(Integer lhs, Integer rhs);    // 減算
    friend Integer operator*(Integer lhs, Integer rhs);    // 乗算
    friend Integer operator/(Integer lhs, Integer rhs);    // 徐算

    void show() const;
};

Integer operator+(Integer lhs, Integer rhs)
{
    return Integer{lhs.value + rhs.value};
}

Integer operator-(Integer lhs, Integer rhs)
{
    return Integer{lhs.value - rhs.value};
}

Integer operator*(Integer lhs, Integer rhs)
{
    return Integer{lhs.value * rhs.value};
}

Integer operator/(Integer lhs, Integer rhs)
{
    return Integer{lhs.value / rhs.value};
}

void Integer::show() const
{
    std::cout << "Integer.value = " << value << std::endl;
}

int main()
{
    Integer x = 3;
    Integer y = 2;
    Integer z = 1;

    auto v = 8 / x * y - y / z + 5;
    v.show();
}