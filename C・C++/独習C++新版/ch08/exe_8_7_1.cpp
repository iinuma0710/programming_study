#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::ofstream out{"exe_hello_seek.txt"};
    out << "Hello, world" << std::endl;
    
    // 7バイト目に移動
    out.seekp(7, std::ios::beg);

    // 上書き
    out << "file seek" << std::endl;

    out.close();
}