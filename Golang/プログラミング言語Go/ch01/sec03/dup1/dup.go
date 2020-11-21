// 標準入力から2回以上現れる行を出現回数と一緒に表示する
package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	// 文字列と出現回数を紐付ける空マップの作成
	counts := make(map[string]int)

	// 標準入力からの入力を1行毎に処理する
	input := bufio.NewScanner(os.Stdin) // 行ごとにデータを処理できるように標準入出力からデータを取得
	for input.Scan() {
		counts[input.Text()]++
	}

	// 2回以上出現した文字列を表示
	for line, n := range counts {
		if n > 1 {
			fmt.Printf("%d\t%s\n", n, line)
		}
	}
}
