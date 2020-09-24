#include <iostream>
#include <fstream>

using namespace std;

int main(void) {
    char filename[] = "output.txt";
    ofstream out(filename);
    /* あるいは、 
       ofstream out;
       out.open(filename);  */
    if(!out) {
        cout << "Can't open file: " << filename << endl;
        return 1;
    }

    out << "Hello World" << endl; /* 文字列 */

    out << 10 << " " << 1.0 << endl; /* 整数、浮動小数 */

    char name[] = "Taro";    /* 文字列 */
    out << "Hello World, " << name << endl;


    /* 浮動小数点などの込み入った表示例 */
    double v =(((1.0)/1000)/1000)/1000; 
    out << v << " ";
    out.setf(ios::fixed, ios::floatfield);
    out.precision(6);
    out << v << " ";
    out.precision(12);
    out << v << endl;
    out.unsetf(ios::fixed);

    out << 1.0/0.0 << " " << 0.0/0.0 << endl;
    out.close();
    return 0;
}

