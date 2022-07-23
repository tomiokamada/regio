#include <queue>
#include <complex>
#include <iostream>
#include <fstream>

#define MAX_W 30
#define MAX_H 30
using namespace std;
using point = complex<int>;
point directions[] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

int canGoX[MAX_H + 2][MAX_W + 2];
int canGoY[MAX_H + 2][MAX_W + 2];
int steps[MAX_H][MAX_W] = {};

int canGo(point & from, point & direct) {
  if (direct.imag() == 0) {
    if (direct.real() > 0)
      return canGoX[1+ from.imag()][1 + from.real()];
    else
      return canGoX[1 + from.imag()][1 + from.real() - 1];
  } else { /* direct.real()==0*/
    if (direct.imag() > 0)
      return canGoY[1 + from.imag()][1 + from.real()];
    else
      return canGoY[1 + from.imag() - 1][1 + from.real()];
  }
}

void setupBoard(int w, int h) {
  int i = 0;
  for (i = 0; i < h + 2; i++) {
    int j;
    for (j = 0; j < w + 2; j++) {
      canGoX[i][j] = 0;
      canGoY[i][j] = 0;
    }
  }
  i = 0;
  while (1) {
    int j;
    for (j = 0; j < w - 1; j++) {
      int d;
      cin >> d;
      canGoX[1 + i][1 + j] = 1 - d;
    }
    if (i + 1 == h) break;
    for (j = 0; j < w; j++) {
      int d;
      cin >> d;
      canGoY[1 + i][1 + j] = 1 - d;
    }
    i++;
  }
}
int clearSteps(int w, int h) { 
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      steps[i][j] = 0;
    }
  }
}
int getStep(point p) { return steps[p.imag()][p.real()]; }
void setStep(point p, int v) { steps[p.imag()][p.real()] = v; }

int solve(int w, int h) {
  point start = {0, 0};
  point goal = {w - 1, h - 1};
  queue<point> q;
  q.push(start);
  clearSteps(w, h);
  setStep(start, 1);

  while (!q.empty()) {
    point here = q.front();
    q.pop();
    int currentStep = steps[here.imag()][here.real()];
    for (point & d: directions) {
      if (canGo(here, d)) {
        point next = here + d;
        if (getStep(next) > 0) continue;
        if (next == goal) return currentStep + 1;
        setStep(next, currentStep + 1);
        q.push(next);
      }
    }
  }
  return 0;
}


int main() {
  ifstream ifs("mazeData/B1.in");
  if(ifs.good()) {// file があるときはそちらから
    cin.rdbuf(ifs.rdbuf());
  }
  while (1) {
    int w, h, result, ans;
    cin >> w >> h;
    if (w == 0 && h == 0) break;
    setupBoard(w, h);
    result = solve(w, h);
    cout << result << endl;
  }
  return 0;
}
