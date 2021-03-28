#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

int main()
{
    std::ofstream out;          // ファイル出力ようのオブジェクトを作成
    out.open("hello_file.txt"); //ファイルオープン

    out << "Hello, File IO" << std::endl;   // ファイルに文字列を出力
    out << std::setprecision(4) << std::scientific << 12.345667f << std::endl;

    out.close();    // ファイルをクローズ

    // 入力用のオブジェクトを作成するのと同時にオープンできる
    std::ifstream in{"hello_file.txt"};

    std::string line;
    std::getline(in, line); // ファイルから1行入力する
    float f;
    in >> f;

    std::cout << line << std::endl; // ファイルから読み込んだ1行を画面に出力する
    std::cout << f << std::endl;    // 読み込んだ浮動小数点数も出力

    // デストラクタで自動的にクローズされる
    // in.close();
}