#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  int n;
  cin >> n;
  vector<int> vec(n);

  for (int i = 0; i < n; i++) {
    cin >> vec[i];
  }
  int maxSum = INT32_MIN;
  for (int from = 0; from < n - 1; from++) {
    for (int to = from + 1; to < n; to++) {
      int sum = 0;
      for (int i = from; i <= to; i++) {
        sum += vec[i];
      }
      if (sum > maxSum) maxSum = sum;
    }
  }
  cout << maxSum << endl;
  return 0;
}