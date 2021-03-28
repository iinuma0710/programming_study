#include <iostream>

int identity(int v)
{
    return v;
}

int square(int v)
{
    return v * v;
}

int main()
{
    // 関数ポインタを宣言し identity で初期化する
    int (*func)(int) = &identity;
    // 関数ポインタ経由で関数を呼び出す
    std::cout << "func(4) : " << func(4) << std::endl;

    // 関数ポインタに別の関数のポインタを代入する
    func = &square;
    // 関数ポインタ経由で関数を呼び出す
    std::cout << "func(4) : " << func(4) << std::endl;
}