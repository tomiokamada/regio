#include <iostream>
#include <vector>
using namespace std;

int sum(int x, int y) {
    int result = x + y;
    x++; // x を変化させてみる
    cout << "in sum() " << x << endl;
    return result;
}
void add(int & x, int y) {
    x += y;
    cout << "in add() " << x << endl; 
}

int main(void)
{
    int a = 3;
    int b = sum(a, 4);
    cout << "main0:" << a << "," << b << endl;
    add(a, b);
    cout << "main1:" << a << "," << b << endl;
    return 0;
}
