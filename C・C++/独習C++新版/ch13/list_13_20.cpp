#include <iostream>

int main()
{
    std::cout << R"hello_raw(生文字列リテラルは
    ソースコード上の改行も
        そのまま固辞列の一部として扱われる上，
    \ もエスケープとしてではなく
    バックスラッシュ文字として扱われる
        ので \n は改行にはならない)hello_raw" << std::endl;
}