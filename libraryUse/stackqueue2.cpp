#include <iostream>
#include <stack>
#include <queue>
#include <complex>
using namespace std;
using point = complex<int>;

point sample_point(int i) {
  int val = 3 * i % 10;
  return point(val, 10 - val);
}

int main(void) {
  stack<point> stack;
  queue<point> queue;
  // real() の小さい順（priority queue としては real() の大きい順）
  auto cmp = [](point & p1, point & p2) { return p1.real() < p2.real(); };
  priority_queue<point, vector<point>, decltype(cmp)> priority_q(cmp);

  for (int i = 1; i < 10; i++) {
    point val = sample_point(i);
    stack.push(val);
    queue.push(val);
    priority_q.push(val);
  }

  cout << "stack:";
  while (!stack.empty()) {
    cout << " " <<  stack.top();
    stack.pop();
  }
  cout << endl;
  cout << "queue:";
  while (!queue.empty()) {
    cout << " " <<  queue.front();
    queue.pop();
  }
  cout << endl;
  cout << "priority queue:";
  while (!priority_q.empty()) {
    cout << " " <<  priority_q.top();
    priority_q.pop();
  }
  cout << endl;
  return 0;
}
