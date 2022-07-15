# 情報オリンピック　レギオ講習会用プログラムソース

gitPod でそのまま動くようにしています。（2022年7月再設定）

## gitPod での使い方

初回アクセス（workspace 作成）

1. github にアカウントを取得し、login しておきましょう。
2. https://gitpod.io/#https://github.com/tomiokamada/regio にアクセス
3. 1-2分待ったほうがよいかも。（いくつかplugin が load されたりします）
4. 重要： `.vscode4pod` に gitpod 用の環境設定をおいてあります。`.vscode4pod` を選択して右クリック、rename で `.viscode` に変更してください。

２回目からのアクセス

1. https://gitpod.io/workspaces/ から、自分の実行したい workspace を選びましょう。
	* 14日使っていない状態が続くと、workspace が消滅します。自分の作成＆編集したファイルなどが無くなるのでご注意を。
	* 無料枠は月 50時間だったと思いますので、お気をつけて。
	* ファイルなどを置いておきたい人は、このページから `Download` ボタンを押せばよいでしょう。

プログラムの実行（ターミナル）

1. `Terminal` -> `New Terminal` でターミナルが開きます。
2. あとは、gcc なりでコンパイルして、実行してみましょう。
3. 以下は、`samples` directory の `hello.c` をコンパイルして実行した例

```
gitpod /workspace/podTest $ cd samples
gitpod /workspace/podTest/samples $ ls
hello.c
gitpod /workspace/podTest/samples $ gcc hello.c 
gitpod /workspace/podTest/samples $ ./a.out 
Hello World!
gitpod /workspace/podTest/samples $ 
```

プログラムの実行（GUI操作）

1. `samples/hello.c` を開いてください。`samples` をクリックすると、directory の中のファイルも見えるはず。
2. 実行対象プログラムをEditor 上で選択した状態(`hello.c`選択）で、F5 で debug を開始します。
   * `注1`: 違うファイルを選択していると、コンパイルできません。
   * `注2`: explorer 側で選択するだけでなく、エディタのフォーカスがあっている必要があるようです。
   * 左上のメニューから  `Run` ->`Start Debugging` などでもデバッグ開始できます。
* `注`: 実行 directory は、各プログラムがある directory に設定しています。


## VS code などで使いたい

Desktop の VS code 左側のメニューの上から３つめぐらいにある「リポジトリのクローン」を選んで、URL に 
 git@github.com:tomiokamada/regio.git
を指定してください。

先に、git のセットアップを済ませたり、C/C++ extension をいれたりしないといけませんが。

* [参考資料](https://www.nc.ii.konan-u.ac.jp/projects/debugEnv/vscode/c/#git)


  

