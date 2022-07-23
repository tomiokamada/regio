#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main(void) {
  stack<int> stack;
  queue<int> queue;
  priority_queue<int> pri_q;
  priority_queue<int, vector<int>, greater<int>> pri_q2;

  for (int i = 1; i < 10; i++) {
    int val = 3 * i % 10;
    stack.push(val);
    queue.push(val);
    pri_q.push(val);
    pri_q2.push(val);
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
  while (!pri_q.empty()) {
    cout << " " <<  pri_q.top();
    pri_q.pop();
  }
  cout << endl;
  cout << "priority queue2:";
  while (!pri_q2.empty()) {
    cout << " " << pri_q2.top();
    pri_q2.pop();
  }
  cout << endl;
  return 0;
}
