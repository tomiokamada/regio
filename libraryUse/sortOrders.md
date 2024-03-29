2005年第５回ＪＯＩ第２回模擬試験３番

# 問題

ある工場では、各営業所から製品生産の注文を受けています。 前日の注文をまとめて各製品の生産合計を求めたいと思っています。

## 入力

入力ファイルの１行目には注文データの数 `n` が書いてあります。
続く `n` 行には製品名と注文数が空白で区切られて書いてあります。
製品名は5文字以内の英大文字で書かれています。
注文データには同じ製品が含まれていることもあり、順序はバラバラとなっています。

## 出力

この注文データの中に現れる同じ製品の注文数を合計し、製品名と合計を此の順に空白１文字で区切って、改行とともに出力しなさい。 ただし、製品名に次の順序を付けてその順で出力すること。 
順序については、文字の長さの小さい順で、同じ長さのときは、前から比べて最初に異なる文字の、アルファベット順とします。

入力データにおける製品数、注文数とその合計のどれも108以下です。また、注文データ数`n`は10000以下です。

出力の最後の行にも改行コードを入れてください。 

## 入出力例

入力例１
```
5
A 20
B 20
A 20
AB 10
Z 10
```

その出力
```
A 40
B 20
Z 10
AB 10
```

入力例２
```
5
AAA 20
ABA 20
AAA 20
AAB 20
AAA 20
```

その出力
```
AAA 60
AAB 20
ABA 20
```

## テストデータ

* 入力：[data4sortOrders/input](data4sortOrders/input)
* 出力：[data4sortOrders/output](data4sortOrders/output)


プログラム例: 
* [C++](./sortOrders.cpp), [python](./sortOrders.py), [Java](./SortOrders.java)
