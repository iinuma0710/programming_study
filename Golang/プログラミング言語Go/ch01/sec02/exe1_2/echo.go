// package 宣言前に簡単なパッケージの説明を入れる
// コマンドライン引数を表示する
package main

import (
	"fmt"
	"os"
)

func main() {
	// range はインデックスとその要素の値を返す
	for idx, arg := range os.Args { // 使わない変数は _ (ブランク識別子)でエスケープ
		fmt.Println(idx, arg)
	}
}
