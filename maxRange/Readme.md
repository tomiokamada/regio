2011年第11回ＪＯＩ予選２番の改変

# 問題

**n** 個の整数からなる数列 **a<sub>1</sub>**, **a<sub>2</sub>**, ..., **a<sub>n</sub>**  が与えられます。このとき、連続して並ぶ任意個の整数の和の最大値を出力するプログラムを作ってください。

## 入力

* 1 行目には正整数 **n** (1≦n≦100000) が書かれています。
* 2 行目以降の第 **1+i** 行目 (1≦i≦n) には、数列の **i** 番目の項 **a<sub>i</sub>** (-10000≦a<sub>i</sub>≦10000) が書かれています。

５つある採点用データのうち、 ３つは n≦5000、 k≦1000 を満たします。
また、a<sub>i</sub> のいずれか一つは正の整数とします。

## 出力

出力は、整数の和の最大値を改行とともに１行として書き出します。

## 入出力例

実際のデータは [input](input) および [output](output) ディレクトリに配置しています。

|入力例１|入力例２|
|---:|---:|
|5   |  5  |
|2   |  -2 |
|5   |  -5 |
|-4  |  -4 |
|10  |  10 |
|3   |  3  |

|１の出力|２の出力|
|---:|---:|
|16 | 13|

## 解説

pdf資料 [C++版](https://www.nc.ii.konan-u.ac.jp/projects/JOIregio/slides/regioAlgo1.pdf)

プログラム例
* 三重ループ
  * [C++: tripleLoop.cpp](./tripleLoop.cpp), [python: tripleLoop.py](./tripleLoop.py), [Java: TripleLoop.java](./TripleLoop.java)
* 動的計画法(DP)
  * [C++: dp.cpp](./dp.cpp), [python: dp.py](./dp.py), [Java: Dp.java](./Dp.java)  
