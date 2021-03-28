#include <iostream>
#include <fstream>
#include <fstream>

int main()
{
    std::string line;
    // ファイル名を取得
    std::cout << "> ";
    std::getline(std::cin, line);

    std::ifstream in{line};
    // ファイルの最初の1行を取得
    std::getline(in, line);
    std::cout << line << std::endl;
}