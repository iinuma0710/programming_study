#include <iostream>

void throw_zero()
{
    std::cout << "例外を投げる前" << std::endl;

    // int 型のオブジェクトを例外オブジェクトとして投げる
    throw 0;

    std::cout << "例外を投げた後" << std::endl;
}

int main()
{
    try
    {
        std::cout << "関数呼び出し前" << std::endl;
        throw_zero();   // ここで例外が投げられる
        std::cout << "関数呼び出し後" << std::endl;
    }
    catch(int e)
    {
        // throw_zero() 内の throw 0 から処理が飛んでくる
        std::cout << "投げられた例外オブジェクトの値は " << e << std::endl;
    }
    std::cout << "catch の後" << std::endl;
}