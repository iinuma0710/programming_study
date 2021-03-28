#include <iostream>

class A
{
    int i = -1;

public:
    A(int i) : i(i)
    {
        std::cout << "コンストラクタの呼び出し: " << i << std::endl;
        if (i < 0)
        {
            throw 0;
        }
    }

    ~A()
    {
        std::cout << "デストラクタの呼び出し: " << i << std::endl;
    }
};

int main()
{
    try
    {
        A* array = new A[]{A{0}, A{1}, A{2}, A{-1}, A{10}, A{5}};
    }
    catch(int e)
    {
        std::cout << e << std::endl;
    }
    
}