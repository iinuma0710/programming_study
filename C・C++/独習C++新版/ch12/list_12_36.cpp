#include <vector>
#include <algorithm>
#include <iostream>

int main()
{
    std::vector v = { 10, -3, 0, 4, 2 };
    auto c = v; // sort() は変更するので一旦コピー

    // 降順でソート
    std::sort(c.begin(), c.end(), [](int l, int r) { return l > r; });
    for (auto e : c) {
        std::cout << e << " ";
    }
    std::cout << std::endl;
}