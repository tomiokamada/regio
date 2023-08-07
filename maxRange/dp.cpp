#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main(void) {
  // 以下文を有効にすれば指定ファイルから入力可能
  // Windows の場合は `/`  の代わりに \\ を利用し、あと絶対パスを使う必要があるかも。
  // ifstream ifs("input/input1.txt");
  // cin.rdbuf(ifs.rdbuf());

  int n;
  cin >> n;
  vector<int> vec(n);
  for (int i = 0; i < n; i++) {
    cin >> vec[i];
  }
  int maxS = 0;
  int Si = 0;

  for (int i = 0; i < n; i++) {
    int prevSi = Si;
    int s = prevSi + vec[i];
    if (s > 0) 
      Si = s;
    else
      Si = 0;
    if (Si > maxS) maxS = Si;
  }
  cout << maxS << endl;
  return 0;
}
