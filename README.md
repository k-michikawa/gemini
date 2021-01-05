# gemini

### Description

C++ で　 gRPC を使って JWT のトークン生成と検証を行うやつ

検証用に grpcurl 入れておくと良いかも

mac: `brew install grpcurl`

example:

```sh
$ grpcurl -plaintext \
          -import-path ./proto \
          -proto auth.proto \
          -d '{"usetId": "940f5b36-621a-48ea-af39-55647befafbc"}' \
          localhost:9020 \
          leo.AuthService/GetJwt
```

### tools

protodep のインストール

```sh
$ go get github.com/stormcat24/protodep
```

OR

```sh
$ wget https://github.com/stormcat24/protodep/releases/download/0.0.8/protodep_darwin_amd64.tar.gz
$ tar -xf protodep_darwin_amd64.tar.gz
$ mv protodep /usr/local/bin/
```

AFTER

```sh
$ ssh-add ~/.ssh/id_rsa
```

### run

起動するまで

1. `$ docker-compose up -d`

もしかしたら protoc コマンドの pb ファイル生成コケるかも・・・
