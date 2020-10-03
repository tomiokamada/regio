#include <iostream>
#include <math.h>
using namespace std;
int main(void)
{
    vector<int> vec;
    for (int j = 0; j < 5; j++) {
        cin >> vec[j];
    }
    int s = 0;
    for (int j = 0; j < 5; j++) {
        s += vec[j];
    }
    cout << s << endl;
    return 0;
}
