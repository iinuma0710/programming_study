#include <iostream>

class A
{
    static int value;

public:
    void set_value(int value);
    int get_value() const;
};

int A::value = 0;

void A::set_value(int value)
{
    A::value = value;
}

int A::get_value() const
{
    return value;
}


int main()
{
    A a;
    a.set_value(77);
    std::cout << a.get_value() << std::endl;
}