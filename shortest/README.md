# 最短経路系問題

* [解説資料](https://www.nc.ii.konan-u.ac.jp/projects/JOIregio/slides/regioAlgo3.pdf)

問題

## 幅優先探索

* [Amazing Mazes](https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1166&lang=jp), ACM ICPC 国内予選 Problem B
  * [C++](./maze.cpp), [python](./maze.py)
  * [データ＆回答](./mazeData/)
## 最短経路

問題　２次元平面上にいくつか点がある
* ２点の距離が10以下の場合は移動可能
* 始点から終点まで、最短経路で移動したい 

プログラム: 
* ダイクストラ法: [C++](./hopDijkstra.cpp), [python](./hopDijkstra.py)
* A*: [C++](./hopAstar.cpp), [python](./hopAstar.py)
* [データ＆回答](./hopData/)

## 応用問題

* [崖登り](https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1150&lang=jp), ACM ICPC2007 国内予選, Problem D
* [C++](./cliff.cpp), [python](./cliff.py)
* [データ＆回答](./cliffData/)
