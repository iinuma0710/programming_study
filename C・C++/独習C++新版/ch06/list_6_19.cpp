#include <iostream>

class A
{
public:
    operator int() const { return 0; }
};

class B
{
public:
    // explicit 指定された int への変換関数
    explicit operator int() const { return 0; }
};

int main()
{
    A a;
    // OK．変換関数は explicit 指定されていない
    int ia = a;
    // OK．int に暗黙変換されたあと，char に代入される
    char ca = a;

    B b;
    // エラー．explicit 指定があるため暗黙の変換はなされない
    int ib = b;
    // エラー．int への暗黙変換は禁止されているので char への代入も不可
    int cb = b;
    // OK．変数 j は変換関数の戻り値で初期化される
    int j(b);
    // OK．明示的にキャストした場合は変換関数が呼ばれる
    int k = static_cast<int>(b);
}