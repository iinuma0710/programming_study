#include <iostream>

class S
{
    // インスタンスの数を数える static メンバ変数
    static int count;

public:
    S();
    // static メンバ関数の宣言
    static int get_count();
};

// static メンバ変数の実体を定義して 0 で初期化
int S::count = 0;

S::S()
{
    ++count;
}

// static メンバ関数の宣言
int S::get_count()
{
    return count;
}