#include <iostream>

// この関数から例外が飛んでくることはない
void no_throw_exception() noexcept
{
    try
    {
        throw 0;
    }
    catch(...)
    {
        std::cout << "例外を捕捉しました" << std::endl;
    }
    
}

int main()
{
    no_throw_exception();
}