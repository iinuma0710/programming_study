#include <iostream>

class A
{
    int value = 0;

public:
    void set_value(int value);
    int get_value() const;
};


void A::set_value(int value)
{
    // メンバの value に仮引数の value を代入する
    // this->value = value;
    // this を使わない
    value = value;
}

int A::get_value() const
{
    return value;
}


int main()
{
    A a;

    a.set_value(777);

    std::cout << a.get_value() << std::endl;
}