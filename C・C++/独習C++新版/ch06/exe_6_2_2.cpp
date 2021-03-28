#include <iostream>

class Float
{
    float value;

public:
    // 組み込みの整数型のように扱いたいので explicit は付けない
    Float(float value) : value{value} {}

    Float operator+(const Float& rhs) const;    // 加算
    Float operator-(const Float& rhs) const;    // 減算
    Float operator*(const Float& rhs) const;    // 乗算
    Float operator/(const Float& rhs) const;    // 徐算

    void show() const;
};

Float Float::operator+(const Float& rhs) const
{
    return Float{value + rhs.value};
}

Float Float::operator-(const Float& rhs) const
{
    return Float{value - rhs.value};
}

Float Float::operator*(const Float& rhs) const
{
    return Float{value * rhs.value};
}

Float Float::operator/(const Float& rhs) const
{
    return Float{value / rhs.value};
}

void Float::show() const
{
    std::cout <<"Float.value = " << value << std::endl;
}

int main()
{
    Float x = 3.1415;
    Float y = 2.7183;
    Float z = 1.4142;

    auto v = x * y - y / z;
    v.show();
}