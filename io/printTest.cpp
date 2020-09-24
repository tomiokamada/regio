#include <iostream>

using namespace std;  /* std という namespace を使う */

int main(void) {
    cout << "Hello World" << endl; /* 文字列 */

    cout << 10 << " " << 1.0 << endl; /* 整数、浮動小数 */

    char name[] = "Taro";    /* 文字列 */
    cout << "Hello World, " << name << endl;


    /* 浮動小数点などの込み入った表示例 */
    double v =(((1.0)/1000)/1000)/1000; 
    cout << v << " ";
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(6);
    cout << v << " ";
    cout.precision(12);
    cout << v << endl;
    cout.unsetf(ios::fixed);

    cout << 1.0/0.0 << " " << 0.0/0.0 << endl;
    return 0;
}
