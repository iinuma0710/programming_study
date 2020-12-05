#include <iostream>

class A
{
public:
    A()
    {
        std::cout << "コンストラクタが呼ばれました" << std::endl;
    }

    ~A()
    {
        std::cout << "デストラクタが呼ばれました" << std::endl;
    }
};


int main()
{
    std::cout << "動的確保前" << std::endl;
    A* a = new A;
    std::cout << "動的確保後" << std::endl;

    std::cout << "オブジェクト破棄前" << std::endl;
    delete a;
    std::cout << "オブジェクト破棄後" << std::endl;
}