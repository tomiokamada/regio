#include <iostream>
#include <vector>
using namespace std;

bool check(int skip, int n, vector<int> & vec) {
	// skip 番目を無視して、
	// 等差数列になっているかチェック
	return true; // or false
}

int main(void) {
	int n;
	cin >> n;
	vector<int> vec(n+1);
	for (int i = 0; i < n + 1;  i++) {
		cin >> vec[i];
	}
	for(int skip=0; skip<n+1; skip++) {
		if(check(skip, n, vec)) {
			cout << vec[skip] << endl;
			return 0;
		}
	}
	return 0;
}
