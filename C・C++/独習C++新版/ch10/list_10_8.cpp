#include <new>
#include <iostream>

int main()
{
    try
    {
        int len = 5;
        int* array = new int[len]{0, 1, 2, 3, 4, 5};    // 初期化リストの方が長い

        // 何かの処理

        delete [] array;
    }
    // 確保した動的配列より初期化リストの方が長い場合
    catch (std::bad_array_new_length& e)
    {
        std::cout << "動的配列の長さが足りません" << std::endl;
    }
    // メモリ割り当てが失敗した場合
    catch (std::bad_alloc& e)
    {
        std::cout << "メモリ割り当てに失敗しました" << std::endl;
    }
}