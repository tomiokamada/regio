#include <iostream>
#include <map>
using namespace std;

struct myComp {
  bool operator()(const string & a, const string & b) const {
    if (a.length() != b.length()) return a.length() < b.length();
    return a < b;
  }
};

int main(void) {
  int n;
  cin >> n;
  map<string, int, myComp> orders;
  for (int i = 0; i < n; i++) {
    string name;
    int num;
    cin >> name;
    cin >> num;
    int prev = orders[name];
    orders[name] = (prev + num);
  }
  
  for(auto & kv: orders) {
    cout << kv.first << kv.second << endl;
  }
}

int mainNormalDictOrder(void) {
  int n;
  cin >> n;
  map<string, int> orders;
  for (int i = 0; i < n; i++) {
    string name;
    int num;
    cin >> name;
    cin >> num;
    int prev = orders[name];
    orders[name] = prev + num;
  }
  for (auto iter = orders.begin(); iter != orders.end(); iter++) {
    cout << iter->first << iter->second << endl;
  }
}