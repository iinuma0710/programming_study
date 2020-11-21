# プログラミング言語Go
丸善出版「[プログラミング言語Go](https://www.maruzen-publishing.co.jp/item/?book_no=295039)」を読んで Go 言語の基本的な文法事項をまとめていく．

<div align="center">
<img src="image/programming_go.jpg">
</div>


## 環境構築
### Docker を使う場合
Docker と Docker Compose がインストールされていることを前提とする．  
適当なディレクトリを作って，その中に Dockerfile と docker-compose.yml を作成する．

Dockerfile：
```Dockerfile
# ベースとなるDockerイメージ指定
FROM golang:latest
# コンテナ内に作業ディレクトリを作成
RUN mkdir /go/src/work
# コンテナログイン時のディレクトリ指定
WORKDIR /go/src/work
# ホストのファイルをコンテナの作業ディレクトリに移行
ADD . /go/src/work
```
docker-compose.yml：
```yml
version: '3'
services:
  app: # 適当な service 名をつけておく
    build: . 
    tty: true # コンテナの起動永続化
    volumes:
      - .:/go/src/work # マウントディレクトリ指定
```

ビルドして起動する．

```bash
$ sudo docker-compose build
$ sudo docker-compose up -d
```

```/go/src/work``` にマウントしたホスト側のディレクトリに，適当な Go ファイルを作成しておく．
実行は次のコマンドで可能．

```bash
# docker-compose exec サービス名 コマンド
$ sudo docker-compose exec app go run main.go

# Docker コンテナに入って実行することも可能
$ docker-compose exec app /bin/bash # コンテナのシェル起動
$ go run main.go
```

### Docker を使わない場合
apt でインストールするだけ．
```bash
$ sudo apt install golang
$ go version
go version go1.13.8 linux/amd64
```

