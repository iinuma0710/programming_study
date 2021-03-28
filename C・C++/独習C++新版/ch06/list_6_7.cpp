#include <iostream>

class Integer
{
    int value;

public:
    // 組み込みの整数型のように扱いたいので explicit は付けない
    Integer(int value) : value{value} {}

    bool operator!() const; // 単項論理否定
    bool operator&&(const Integer& rhs) const;
    bool operator||(const Integer& rhs) const;
};

bool Integer::operator!() const
{
    return value != 0;
}

bool Integer::operator&&(const Integer& rhs) const
{
    return value && rhs.value;
}

bool Integer::operator||(const Integer& rhs) const
{
    return value || rhs.value;
}


int main()
{
    Integer x = 10;
    Integer y = 3;
    Integer z = 0;

    if (x && y) {
        std::cout << "x と y はどちらも0ではない" << std::endl;
    } 

    if (z || x) {
        std::cout << "z と x の少なくともどちらかは0ではない" << std::endl;
    }

    if (!z) {
        std::cout << "z は0" << std::endl;
    }
}