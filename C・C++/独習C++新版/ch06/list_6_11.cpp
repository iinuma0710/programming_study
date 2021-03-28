#include <iostream>
#include <utility>
#include <memory>

class A
{
public:
    A()
    {
        std::cout << "コンストラクタ" << std::endl;
    }

    ~A()
    {
        std::cout << "デストラクタ" << std::endl;
    }
};

std::unique_ptr<A> allocate()
{
    std::cout << "allocate()" << std::endl;
    std::unique_ptr<A> ptr{new A{}};

    //メモリ領域の所有権を戻り値として関数スコープの外側に移動する
    return std::move(ptr);
}

int main()
{
    {
        // 空の std::unique_ptr，nullptr で初期化される
        std::unique_ptr<A> ptr;
        std::cout << "関数呼び出しの前" << std::endl;

        // allocate() が確保したメモリ領域の所有権を受け取る
        ptr = allocate();
        std::cout << "関数呼び出しの後" << std::endl;
    }

    std::cout << "スコープの後" << std::endl;
}