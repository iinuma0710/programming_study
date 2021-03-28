#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{10, 20, 30};

    // ネストした型は長くてミスが起こりやすい
    // エラー：v の要素は int のはず
    std::vector<float>::reference r = v[0];

    // 添字演算子を使っていることから要素への参照を取得していることが推定できる
    // そのため auto を使って型推定してしまっても齟齬が生じにくい
    const auto& cr = v[0];
}