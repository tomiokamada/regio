#include <cfloat>
#include <complex>
#include <fstream>
#include <iostream>
#include <queue>
#include <tuple>

using namespace std;
using point = complex<double>;

typedef struct search_node {
  double path;
  double plusEst;
  int index;
} search_node;

#define Path 0
#define Est 1
#define Index 2
#define ONE_HOP 10.00001
#define MAX_N_POINTS 110
point points[MAX_N_POINTS];
double cost[MAX_N_POINTS];

/* 盤面 setup用の関数、皆さんは見る必要はない */
void setup(int n) {
  int i;
  for (i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    points[i] = point(x, y);
    cost[i] = DBL_MAX;
  }
}

double solve(int n) {
  int i;
  int count = 0;
  auto cmp = [](search_node& a, search_node& b) {
    return a.plusEst > b.plusEst;
  };
  priority_queue<search_node, vector<search_node>, decltype(cmp)> q(cmp);
  search_node start = {0.0, 0};
  cost[0] = 0.0;
  q.push(start);
  point goal = points[n - 1];

  while (!q.empty()) {
    search_node here = q.top();
    q.pop();
    if (cost[here.index] < here.path) continue;
    if (here.index == n - 1) break;
    for (int j = 1; j < n; j++) { /* １ステップで到達できる点を探す */
      if (here.index == j) continue;
      double dist = abs(points[here.index]-points[j]);
      if (dist > ONE_HOP) continue; /* 1step でいけないとき */
      double nextPathLen = here.path + dist;
      if (cost[j] <= nextPathLen) continue;
      cost[j] = nextPathLen;
      double est = abs(points[j] - goal);
      search_node next = {nextPathLen, nextPathLen + est, j};
      q.push(next);
      count++;
    }
  }
  if (cost[n - 1] == DBL_MAX) return 0.0;
  return cost[n - 1];
}

int main() {
  ifstream ifs("hopData/sample.in");
  if(ifs.good()) {// file があるときはそちらから
    cin.rdbuf(ifs.rdbuf());
  }
  while (1) {
    int n;
    double result;
    cin >> n;
    if (n == 0) break;
    setup(n);
    result = solve(n);
    printf("%f\n", result);
  }
  return 0;
}
