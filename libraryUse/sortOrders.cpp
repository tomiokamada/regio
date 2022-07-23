#include <iostream>
#include <map>
using namespace std;

int main(void) {
  int n;
  cin >> n;
  // stringの比較器
  auto cmp = [](string a, string b) {
    // string の長さが違うとときは、長さで判断
    if (a.length() != b.length()) return a.length() < b.length();
    // 長さが同じ時は、辞書順で比較
    return a < b;
  };
  // 比較器 cmp を指定した map の作成
  map<string, int, decltype(cmp)> orders(cmp);
  for (int i = 0; i < n; i++) {
    string name;
    int num;
    cin >> name;
    cin >> num;
    int prev = orders[name];
    orders[name] = (prev + num);
  }
  
  for(auto & kv: orders) {
    cout << kv.first << " " << kv.second << endl;
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
    cout << iter->first << " " << iter->second << endl;
  }
}