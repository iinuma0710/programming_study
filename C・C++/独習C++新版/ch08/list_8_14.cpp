#include <iostream>
#include <fstream>

int main()
{
    std::ifstream in{"hello_eof.txt"};

    while (in.good())
    {
        in.get();
        auto state = in.rdstate();

        if (state & std::ios::eofbit) {
            std::cout << "EOF に到達しました" <<std::endl;
        } else if (state & std::ios::failbit) {
            std::cout << "致命的ではないエラーが見つかりました" <<std::endl;
        } else if (state & std::ios::badbit) {
            std::cout << "致命的なエラーが見つかりました" <<std::endl;
        }
    }
    
}