#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    vector<int> vec(5);
    for (int& ref: vec) {
        cin >> ref;
    }
    int s=0;
    for (int v: vec) {
        s += v;
    }
    cout << s << endl;
    return 0;
}
