#include <iostream>

void throw_zero()
{
    throw 0;
}

int main()
{
    try
    {
        throw_zero();
    }
    catch(float e)
    {
        std::cout << "float型の例外オブジェクトを捕まえました 値 = " << e << std::endl;
    }
    // どの catch 節にもかからなかった例外を捕捉
    catch(...)
    {
        // 例外オブジェクトの値を取得することはできない
        std::cout << "未対応の例外オブジェクトを捕まえました" << std::endl;
    }

    std::cout << "catch 後" << std::endl;
    
}