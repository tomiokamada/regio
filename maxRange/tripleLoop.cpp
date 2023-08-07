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
  int maxSum = 0;
  for (int from = 0; from <= n-1 ; from++) {
    for (int to = from + 1; to <= n; to++) {
      int sum = 0;
      for (int i = from; i < to; i++) {
        sum += vec[i];
      }
      if (sum > maxSum) maxSum = sum;
    }
  }
  cout << maxSum << endl;
  return 0;
}
