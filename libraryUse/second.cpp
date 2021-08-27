#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
  const int n = 5;
  vector<int> vec(n);
  for (int i = 0; i < n; i++) {
    cin >> vec[i];
  }
  sort(vec.begin(), vec.end()); // 小さい順
  cout << vec[n-2] << endl;
}

int mainArray(void) {
  const int n = 5;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a+n);  // 小さい順
  cout << a[n-2] << endl;
}
