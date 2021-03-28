#include <new>
#include <iostream>

int main()
{
    try
    {
        int* ptr = new int;

        // 何かの処理

        delete ptr;
    }
    catch(std::bad_alloc& e)
    {
        std::cout << "メモリの割り当てに失敗しました" << std::endl;
    }
    
}