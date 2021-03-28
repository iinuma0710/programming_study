#include <iostream>

class heap
{
    int* i;

public:
    heap() : i{nullptr} { }

    ~heap()
    {
        delete i;
    }

    bool create();

    // bool 型に変換する
    operator bool() const;
};

bool heap::create()
{
    // true / false になるので if 文でそのまま条件分岐できる
    if (*this) {    // bool 型への変換関数が呼ばれる
        return false;
    }

    i = new int{};
    *i = 0;
    return true;
}

heap::operator bool() const
{
    return i != nullptr;
}

int main()
{
    heap h;

    if (!h) {
        std::cout << "変換関数が false を返しました" << std::endl;
    }

    std::cout << "heap::create() 呼び出し" << std::endl;
    h.create();

    if (!h) {
        std::cout << "変換関数が false を返しました" << std::endl;
    }

    std::cout << "終了" << std::endl;
}