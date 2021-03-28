#include <iostream>

void show_message(const char* message)
{
    std::cout << message << std::endl;
    throw 0;
}

void echo_message()
{
    // 最大99文字を標準入力から読み込む
    char* buffer = new char[100];
    std::cin.get(buffer, 100);

    try
    {
        // 例外の起こり得る処理
        show_message(buffer);
    }
    catch(...)
    {
        std::cout << "例外が発生しました (echo_message)" << std::endl;
        delete [] buffer;   // バッファの削除
        throw;  // 例外を再送出
    }

    delete [] buffer;
}

int main()
{
    try
    {
        echo_message();
    }
    catch(int e)
    {
        std::cout << "int型の例外オブジェクトを捕まえました (main) 値 = " << e << std::endl;
    }
    catch(...)
    {
        std::cout << "例外を捕まえました (main)" << std::endl;
    }
}