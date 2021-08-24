#include <iostream>
#include <vector>
using namespace std;

int printVecX(vector<int> vec) { // 普通は & を使う
    vec.push_back(10); // 実験のため要素を追加
    cout << "VecX:";
    for (size_t i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int printVec(vector<int> & vec) { 
    vec.push_back(100); // こちらも要素を追加してみる
    cout << "VecRef:";    
    for(size_t i=0; i<vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;    
}

int main(void)
{
    vector<int> vec{1, 2};
    printVecX(vec);
    printVec(vec);
    return 0;
}
