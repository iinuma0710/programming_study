#include <iostream>
#include <string>
#include <regex>

int main()
{
    std::regex re{"(.)もも"};   

    std::string input = "すもももももももものうち";
    std::string fmt = "$1うどん";   // $1 は正規表現の第1サブマッチに置換される
    std::string output;

    // 置換，任意の1文字+"もも"を"うどん"に置換する
    std::regex_replace(
        std::back_inserter(output), // 出力
        input.begin(),  // 入力の先頭
        input.end(),    // 入力の末尾
        re, // 正規表現
        fmt // 置換フォーマット
    );

    std::cout << output << std::endl;
}