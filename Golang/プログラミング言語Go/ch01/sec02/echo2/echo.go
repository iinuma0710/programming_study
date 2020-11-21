// package 宣言前に簡単なパッケージの説明を入れる
// コマンドライン引数を表示する
package main

import (
	"fmt"
	"os"
)

func main() {
	s, sep := "", ""
	// range はインデックスとその要素の値を返す
	for _, arg := range os.Args[1:] { // 使わない変数は _ (ブランク識別子)でエスケープ
		s += sep + arg
		sep = " "
	}
	fmt.Println(s)
}
