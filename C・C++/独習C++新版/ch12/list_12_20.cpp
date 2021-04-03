#include <iostream>
#include <list>

int main()
{
    std::list il = { 0, 1, 2, 3, 4 };
    auto top = il.begin();  // top は0を指す

    auto next = il.begin();
    ++next; // next は1を指す

    auto bottom = il.end();
    --bottom;   // bottom は4を指す

    il.erase(top);      // 削除された要素を指す top は無効になるが
    il.push_back(5);    // それ以外は無効とならない

    for (auto iter = next; iter != bottom; ++iter) {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;
}