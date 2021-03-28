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
    // 関数リファレンスを宣言し identity で初期化する
    int (&func)(int) = identity;
    // 関数ポインタ経由で関数を呼び出す
    std::cout << "func(4) : " << func(4) << std::endl;

    // 参照先は変更できないので，これはエラーになる
    // func = &square;
}