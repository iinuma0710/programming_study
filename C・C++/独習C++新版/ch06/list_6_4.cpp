#include <iostream>

class Integer
{
    int value;

public:
    // 組み込みの整数型のように扱いたいので explicit は付けない
    Integer(int value) : value{value} {}

    // 前置
    Integer operator++();
    Integer operator--();
    // 後置
    Integer operator++(int);
    Integer operator--(int);

    void show() const;
};

Integer Integer::operator++()
{
    ++value;
    return *this;
}

Integer Integer::operator--()
{
    --value;
    return *this;
}

Integer Integer::operator++(int)
{
    auto tmp = *this;
    ++*this;
    return tmp;
}

Integer Integer::operator--(int)
{
    auto tmp = *this;
    --*this;
    return tmp;
}

void Integer::show() const
{
    std::cout <<"Integer.value = " << value << std::endl;
}

int main()
{
    Integer x = 10;
    
    ++x;
    x.show();

    x++;
    x.show();

    --x;
    x.show();

    x--;
    x.show();
}