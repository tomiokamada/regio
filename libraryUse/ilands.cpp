#include <iostream>
#include <stack>
#include <complex>
using namespace std;

int numLand = 0;
int w, h;

int c[50][50];
using point = complex<int>;

point directions[] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1},
                    {1, 1}, {-1, -1}, {-1, 1}, {1, -1},
};

point searchOne() {
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if(c[i][j] > 0) return point(j,i);
    }
  }
  cout << "this should not called!" << endl;
}
bool rangeOut(point & p) {
  int x = p.real(), y = p.imag();
  return (x < 0) || (x >= w) || (y < 0) || (y >= h);
}
void delLand(point & p) { 
  c[p.imag()][p.real()] = 0;
  numLand--;
}
bool solve(void) {
  int numIland = 0;

  cin >> w >> h;
  if(w==0 && h==0) return false;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> c[i][j];
      if (c[i][j] > 0) numLand++;
    }
  }

  stack<point> searching;
  while(numLand > 0) {
    numIland++;
    auto one = searchOne();
    searching.push(one);
    delLand(one);
    while (!searching.empty()) {
      auto one = searching.top();
      searching.pop();

      for(auto & direct1: directions) {
        auto next = one + direct1;
        if (rangeOut(next)) continue;
        if (c[next.imag()][next.real()] > 0) {
          delLand(next);
          searching.push(next);          
        }
      }
    }
  }
  cout << numIland << endl;
  return true;
}

int main(void) {
  while(solve());
  return 0;
}