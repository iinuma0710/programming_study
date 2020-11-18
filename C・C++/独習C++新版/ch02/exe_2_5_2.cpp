#include <iostream>

class nest_class {
    using integer = int;
    integer i;

public:
    void setter(integer val);
    integer getter();
};

void nest_class::setter(integer val)
{
    i = val;
}

nest_class::integer nest_class::getter()
{
    return i;
}