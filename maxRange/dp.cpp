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
