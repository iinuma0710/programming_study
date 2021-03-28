#include <iostream>

// 受け取った参照をそのまま返す
int& id(int& i)
{
    return i;
}

int main()
{
    int i = 42;

    auto& j = id(i); // jは参照？値？

    j = 0;  // 参照でなければ i は変わらないはず

    // j は i の参照となる
    std::cout << i << std::endl;
}