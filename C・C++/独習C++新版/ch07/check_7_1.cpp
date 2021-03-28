#include <iostream>

class Base
{
public:
    virtual std::string name() const
    {
        return "Base";
    }
};

class Derived : public Base
{
public:
    std::string name() const override
    {
        return "Derived";
    }
};

void show_name(Base& base)
{
    std::cout << base.name() << std::endl;
}

int main()
{
    Derived derived;
    show_name(derived);
}

