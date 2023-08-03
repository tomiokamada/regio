# ライブラリの利用

* 解説資料
  * [C++版](https://www.nc.ii.konan-u.ac.jp/projects/JOIregio/slides/regioAlgo2.pdf)


## ソート

問題：５つの数字を与えられたとして、２番目に大きな数字を返す

* 別解：「最大値を取り除いてから」次の最大値をみつけてもいい
* 今回：面倒だから、ソートして２番目の数字を取り出そう

* [C++](./second.cpp), [python](./second.py), [Java](./Second.java)

## 発注集計

[問題文](./sortOrders.md)
* マップ（連想リスト）やソートの利用

## 単純なライブラリ利用コード

* Stack, Queue, 優先度キュー
  * int 版: [C++: stackqueue.cpp](./stackqueue.cpp), [python: stackqueue.py](./stackqueue.py), [Java: StackQueue.java](./StackQueue.java)
  * 複素数（or 座標）版： [C++: stackqueue2.cpp](./stackqueue2.cpp), [python: stackqueue2.py](./stackqueue2.py), [Java: StackQueue2.java](./StackQueue2.java)

## 利用例

* [島はいくつある？](https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1160&lang=jp), ACM ICPC2009 国内予選, Problem B
* [C++: ilands.cpp](./ilands.cpp), [python: ilands.py](./ilands.py), [Java: Ilands.java](./Ilands.java)
* [データ＆回答](./data4ilands/)
