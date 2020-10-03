#include <iostream>
#include <math.h>
using namespace std;
int main(void)
{
    int a[5], s=0;
    for (int j = 0; j < 5; j++) {
        cin >> a[j];
    }
    for (int j = 0; j < 5; j++) {
        s += a[j];
    }
    cout << s;
    return 0;
}
