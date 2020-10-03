#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    vector<int> v;
    for (int j = 0; j < 5; j++) {
        cin >> v[j];
    }
    int s = 0;
    for (int j = 0; j < 5; j++) {
        s += v[j];
    }
    cout << s << endl;
    return 0;
}
