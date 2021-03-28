#include <iostream>

class Base
{
public:
    virtual ~Base() {}
};

class Derived1 : public Base {};

class Derived2 : public Base {};

int main()
{
    Derived1 derived1;
    
    Base& rbase = derived1;

    try
    {
        auto& derived2 = dynamic_cast<Derived2&>(rbase);
    }
    catch(std::bad_cast& e)
    {
        std::cout << "dynamic_cast 失敗" << std::endl;
    }
    
}