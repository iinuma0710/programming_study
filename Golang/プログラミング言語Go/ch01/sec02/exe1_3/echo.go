// package 宣言前に簡単なパッケージの説明を入れる
// コマンドライン引数を表示する
package main

import (
	"fmt"
	"os"
	"strings"
	"time"
)

func main() {
	// 非効率な可能性のあるコード
	var s, sep string
	start := time.Now()
	for i := 0; i < len(os.Args); i++ {
		s += sep + os.Args[i]
		sep = " "
	}
	fmt.Println(s)
	end := time.Now()
	fmt.Printf("実行時間：%f秒\n", (end.Sub(start)).Seconds())

	// 改善したコード
	start = time.Now()
	fmt.Println(strings.Join(os.Args, " "))
	end = time.Now()
	fmt.Printf("実行時間：%f秒\n", (end.Sub(start)).Seconds())
}
