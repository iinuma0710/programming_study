#include <iostream>

class Integer
{
    int value;

public:
    // 組み込みの整数型のように扱いたいので explicit は付けない
    Integer(int value) : value{value} {}

    bool operator==(const Integer& rhs) const;
    bool operator!=(const Integer& rhs) const;
    bool operator<(const Integer& rhs) const;
    bool operator>(const Integer& rhs) const;
    bool operator<=(const Integer& rhs) const;
    bool operator>=(const Integer& rhs) const;

    void show() const;
};

bool Integer::operator==(const Integer& rhs) const
{
    return value == rhs.value;
}

bool Integer::operator!=(const Integer& rhs) const
{
    // == のオーバロードを呼び出してその否定を返す
    return !(*this == rhs);
}

bool Integer::operator<(const Integer& rhs) const
{
    return value < rhs.value;
}

bool Integer::operator>(const Integer& rhs) const
{
    return rhs < *this;
}

bool Integer::operator<=(const Integer& rhs) const
{
    return !(rhs < *this);
}

bool Integer::operator>=(const Integer& rhs) const
{
    return rhs <= *this;
}


int main()
{
    Integer x = 10;
    Integer y = 3;

    if (x != y) {
        std::cout << "x != y は true" << std::endl;
    } else {
        std::cout << "x != y は false" << std::endl;
    }

    if (y >= x) {
        std::cout << "y >= x は true" << std::endl;
    } else {
        std::cout << "y >= x は false" << std::endl;
    }
}