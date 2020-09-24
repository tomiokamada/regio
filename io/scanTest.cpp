#include <iostream>
using namespace std;

int main(void) {
    int x;
    cin >> x;  /* int への読み込み */
    cout << "Input: " << x << endl;
    
    int y[2]; 
    cin >> y[0] >> y[1];  /* 配列要素への読み込み */
    cout << "Input: " << y[0] << ", " << y[1] << endl;

    float v;
    cin >> v;   /* float の読み込み */
    cout << "Input: " << v << endl;

    double v2;  
    cin >> v2;  /* double の読み込み */
    cout << "Input: " << v2 << endl;
    
    string str; 
    cin >> str;  /* 空白で区切られた文字の読み込み */
    cout << "Input: " << str << endl;

    string line; 
    getline(cin,line);
    cout << "Input: " << line << endl;
    getline(cin,line);
    cout << "Input: " << line << endl;
    return 0;
}
