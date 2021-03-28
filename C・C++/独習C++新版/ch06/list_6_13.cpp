#include <iostream>

// 呼び出されるたびにカウントして現在の値を返すカウンタクラス
class Counter
{
    int value;

public:
    Counter() : value{0} {}

    int operator()();       // 引数を受け取らない関数呼び出し演算子のオーバロード
    int operator()(int n);  // 仮引数を1つ受け取る関数呼び出し演算子のオーバロード

    void show() const;
};

// 引数がない場合はインクリメント
int Counter::operator()()
{
    return ++value;
}

// 引数がある場合はその数の分だけ増減させる
int Counter::operator()(int n)
{
    return value += n;
}

void Counter::show() const
{
    std::cout << "Counter.value = " << value << std::endl;
}

int main()
{
    Counter c;
    c();
    c();
    c();
    c(-3);

    c.show();
}