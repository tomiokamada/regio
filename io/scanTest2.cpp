#include <iostream>
#include <fstream>
using namespace std;

int main(void) {
    char filename[] = "scanTest.txt";
    ifstream in(filename);
    /* あるいは、 
       ifstream in;
       in.open(filename);  */
    if(!in) {
        cout << "Can't open file: " << filename << endl;
        return 1;
    }

    int x;
    in >> x;  /* int への読み込み */
    cout << "Input: " << x << endl;
    
    int y[2]; 
    in >> y[0] >> y[1];  /* 配列要素への読み込み */
    cout << "Input: " << y[0] << ", " << y[1] << endl;

    float v;
    in >> v;   /* float の読み込み */
    cout << "Input: " << v << endl;

    double v2;  
    in >> v2;  /* double の読み込み */
    cout << "Input: " << v2 << endl;
    
    string str; 
    in >> str;  /* 空白で区切られた文字の読み込み */
    cout << "Input: " << str << endl;

    string line; 
    getline(in,line);
    cout << "Input: " << line << endl;
    getline(in,line);
    cout << "Input: " << line << endl;

    in.close();
    return 0;
}
