#include <iostream>

class A
{
public:
    A()
    {
        std::cout << "デフォルトコンストラクタ" << std::endl;
    }
    explicit A(int i)
    {
        std::cout << "A::A(" << i << ")" << std::endl;
    }
    explicit A(int i, int j)
    {
        std::cout << "A::A(" << i << ", " << j << ")" << std::endl;
    }
};

int main()
{
    A* a = new A{};
    delete a;

    A* a2 = new A{1};
    delete a2;

    A* a3 = new A{2, 3};
    delete a3;
}