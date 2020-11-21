// package 宣言前に簡単なパッケージの説明を入れる
// コマンドライン引数を表示する
package main

import (
	"fmt"
	"os"
)

func main() {
	var s, sep string
	// for ループで文字列を結合
	for i := 1; i < len(os.Args); i++ {
		s += sep + os.Args[i]
		sep = " "
	}
	fmt.Println(s)
}
