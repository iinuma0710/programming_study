#include <iostream>

class Base {};

class Derived : public Base {};

int main()
{
    Derived derived;
    
    Base& rbase = derived;

    auto rderived = static_cast<Derived&>(rbase);
}