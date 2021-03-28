#include <fstream>
#include <iostream>

int main()
{
    // 読み込み専用ファイルを書き込みモードでオープン
    std::ofstream of{"readonly.txt"};

    if (of.is_open()) {
        // ファイルがオープンできているか確認
        std::cout << "オープン成功" << std::endl;
    } else {
        std::cout << "オープン失敗" << std::endl;
    }
}