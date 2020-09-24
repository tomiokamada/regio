#include <iostream>
using namespace std;
int main(void)
{
    int x, s=0;
    for (int j = 0; j<5; j++) {
        cin >> x;
        s += x;
    }
    cout << s << endl;
    return 0;
}
