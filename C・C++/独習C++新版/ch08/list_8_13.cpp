#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::ofstream out{"hello_seek.txt"};
    out << "Hello, File IO!" << std::endl;
    
    // 現在位置を取得
    std::cout << "現在位置: " << out.tellp() << std::endl;
    
    // 7バイト目に移動
    out.seekp(7);

    // 上書き
    out << "File Seek" << std::endl;

    out.close();

    std::ifstream in{"hello_seek.txt"};
    // 現在の位置から12バイト後ろにシーク
    in.seekg(in.tellg() + std::streamoff{12});

    std::string line;
    std::getline(in, line);

    std::cout << line << std::endl;
}