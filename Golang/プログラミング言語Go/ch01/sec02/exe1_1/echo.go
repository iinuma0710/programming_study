// package 宣言前に簡単なパッケージの説明を入れる
// コマンドライン引数を表示する
package main

import (
	"fmt"
	"os"
	"strings"
)

func main() {
	fmt.Println(strings.Join(os.Args, " "))
}
