#include <iostream>
#include <vector>
using namespace std;

int nth(int skip, int i) {
	if(i<skip) return i;
	return i+1;
}

bool check(int skip, int n, vector<int> vec) {
	int d = vec[nth(skip,1)]-vec[nth(skip,0)];
	for(int i=2; i< n; i++) {
		if(vec[nth(skip,i)]-vec[nth(skip, i-1)]!= d)
			return false;
	}
	return true;
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
