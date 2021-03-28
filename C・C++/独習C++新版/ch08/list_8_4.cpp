#include <iostream>

int main()
{
    char buffer[256];

    // 改行文字が見つかるまで読み込み，改行文字を取り除く
    std::cin.getline(buffer, 256);
    // getline() はヌルで終端するのでそのまま文字列として出力可能
    std::cout << "buffer: " << buffer << std::endl;

    // カンマ区切りで読み込み，区切り文字はそのまま
    std::cin.get(buffer, 256, ',');
    // get() はヌルで終端するのでそのまま文字列として出力可能
    std::cout << "buffer: " << buffer << std::endl;

    std::cin.get(buffer, 256, ',');
    // 先頭に前回の区切り文字が残っているのでバッファは空になる
    if (buffer[0] == '\0') {
        std::cout << "バッファは空" << std::endl;
    }
}