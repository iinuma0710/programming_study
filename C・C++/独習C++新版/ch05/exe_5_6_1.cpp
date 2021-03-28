#include <iostream>

class Marker
{
public:
    Marker();
    ~Marker();
};

Marker::Marker()
{
    std::cout << "コンストラクタ：" << this << std::endl;
}

Marker::~Marker()
{
    std::cout << "デストラクタ：" << this << std::endl;
}

void copy(Marker m)
{
    std::cout << "copy：" << &m << std::endl;
}

void reference(const Marker& m)
{
    std::cout << "reference：" << &m << std::endl;
}

int main()
{
    Marker m;

    std::cout << "値渡し前" << std::endl;
    copy(m);    // インスタンス m とは異なるアドレスにコピーが作成される
    // copy 関数から抜けたところでデストラクタが呼ばれる
    std::cout << "値渡し後" << std::endl;

    std::cout << "参照渡し前" << std::endl;
    reference(m);   // インスタンス m と同じアドレスが渡される
    // reference 関数から抜けてもデストラクタは呼ばれない
    std::cout << "参照渡し後" << std::endl;
}