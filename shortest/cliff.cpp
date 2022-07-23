#include <cfloat>
#include <complex>
#include <fstream>
#include <iostream>
#include <queue>

using namespace std;
using point = complex<int>;
typedef struct search_node {
  point pos;
  int step;
  int time;
} search_node;

#define MAX_H 60
#define MAX_W 30

char board[MAX_H][MAX_W];
int cost[MAX_H][MAX_W][2];
point onehop[2][9] = {
    {{1, 2}, {1, 1}, {1, 0}, {1, -1}, {1, -2}, {2, 1}, {2, 0}, {2, -1}, {3, 0}},
    {{-1, 2}, {-1, 1}, {-1, 0}, {-1, -1}, {-1, -2}, {-2, 1}, {-2, 0}, {-2, -1}, {-3, 0}}};


int solve(int w, int h) {
  auto cmp = [](search_node& a, search_node& b) { 
    return a.time > b.time; 
  };
  priority_queue<search_node, vector<search_node>, decltype(cmp)> q(cmp);
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      char c;
      cin >> c;
      board[i][j] = c;
      cost[i][j][0] = cost[i][j][1] = INT32_MAX;
      if (c == 'S') {
        search_node l = {{j, i}, 0, 0};
        search_node r = {{j, i}, 1, 0};
        q.push(l);
        q.push(r);
        cost[i][j][0] = cost[i][j][1] = 0;        
      }
    }
  }

  while (!q.empty()) {
    search_node here = q.top();
    q.pop();
    if (cost[here.pos.imag()][here.pos.real()][here.step] < here.time) continue;
    int nstep = 1 - here.step;
    for (point& d : onehop[nstep]) { /* １ステップで到達できる点を探す */
      point npos = here.pos + d;
      if(npos.imag() < 0 || npos.imag() >= h|| npos.real() < 0 || npos.real() >= w)
        continue;
      char nc = board[npos.imag()][npos.real()];
      if (nc == 'T') return here.time;
      if (nc == 'X' || nc=='S') continue;
      int ntime = here.time + (nc - '0');
      if (cost[npos.imag()][npos.real()][nstep] < ntime) continue;
      cost[npos.imag()][npos.real()][nstep] = ntime;
      search_node next = {npos, nstep, ntime};
  //      cout << here.pos << "+" << d <<  "->" << npos << ":" << ntime << ":" << nstep << endl;
      q.push(next);
    }
  }
  return -1;
}

int main() {
  ifstream ifs("cliffData/D1.in");
  if(ifs.good()) {// file があるときはそちらから
    cin.rdbuf(ifs.rdbuf());
  }
  while (1) {
    int w, h, result;
    cin >> w >> h;
    if (w == 0 && h==0) break;
    result = solve(w, h);
    cout << result << endl;
  }
  return 0;
}
