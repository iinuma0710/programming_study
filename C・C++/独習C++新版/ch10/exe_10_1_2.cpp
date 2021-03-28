#include <iostream>

int main()
{
    try
    {
        throw 0;
    }
    catch(int e)
    {
        std::cerr << "エラー:" << e << '\n';
    }
}