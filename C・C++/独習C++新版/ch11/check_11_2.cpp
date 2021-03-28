#include <iostream>

class Base
{
public:
    virtual ~Base() {}
};

class Derived : public Base {};

int main()
{
    Derived derived;
    
    Base& rbase = derived;

    auto pderived = dynamic_cast<Derived*>(&rbase);    
}