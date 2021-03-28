#include <iostream>

class Float
{
    float value;

public:
    // 組み込みの整数型のように扱いたいので explicit は付けない
    Float(float value) : value{value} {}

    Float& operator=(const Float& other);
    friend Float operator+(Float lhs, Float rhs);    // 加算
    friend Float operator-(Float lhs, Float rhs);    // 減算
    friend Float operator*(Float lhs, Float rhs);    // 乗算
    friend Float operator/(Float lhs, Float rhs);    // 徐算

    void show() const;
};

Float& Float::operator=(const Float& other)
{
    value = other.value;
    return *this;
}

Float operator+(Float lhs, Float rhs)
{
    return Float{lhs.value + rhs.value};
}

Float operator-(Float lhs, Float rhs)
{
    return Float{lhs.value - rhs.value};
}

Float operator*(Float lhs, Float rhs)
{
    return Float{lhs.value * rhs.value};
}

Float operator/(Float lhs, Float rhs)
{
    return Float{lhs.value / rhs.value};
}

void Float::show() const
{
    std::cout << "Float.value = " << value << std::endl;
}

int main()
{
    Float x = 3.1415;
    Float y = 2.7183;
    Float z = 1.4142;

    auto v = 2.2362 / x * y - y / z + 1.7321;
    v.show();
}