#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    vector<int> v;
    for (int j = 0; j < 5; j++) {
        int d;
        cin >> d;
        v.push_back(d);
    }
    // あるいは、最初からサイズを指定して
    // 以下のように書くのでもOK. 配列っぽい。
    // vector<int> v(5);
    // for (int j = 0; j < 5; j++) {
    //    cin >> v[j];
    //}
    int s = 0;
    for (int j = 0; j < 5; j++) {
        s += v[j];
    }
    cout << s << endl;
    return 0;
}
