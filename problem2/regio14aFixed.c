#include <stdio.h>
#include <stdlib.h>

int h[101];
int nth(int skip, int i) {
	if(i<skip) return h[i];
	return h[i+1];
}

int check(int skip, int n) {
	int d = nth(skip,1)-nth(skip,0);
	for(int i=2; i< n; i++) {
		if(nth(skip,i)-nth(skip, i-1)!= d)
			return 0;
	}
	return 1;
}

int main(void) {
	int n,i, skip;
	scanf("%d", &n);
	for(i=0; i<n+1; i++) {
		scanf("%d", &h[i]);
	}

	for(skip=0; skip<n+1; skip++) {
		if(check(skip, n)) {
			printf("%d\n", h[skip]);
			return 0;
		}
	}
	return 0;
}
