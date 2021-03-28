#include <iostream>

class A
{
public:
    A()
    {
        // コンストラクタで例外を投げる
        throw 0;
    }
};

int main()
{
    try
    {
        // コンストラクタで投げられた例外は new 演算子を通して投げられる
        A* ptr = new A;

        // 何かの処理

        delete ptr;
    }
    catch(int e)
    {
        // 確保されていたメモリは自動的に解放されてからエラーが投げられる
        std::cout << "例外が投げられました 値 = " << 0 << std::endl;
    }
    
}