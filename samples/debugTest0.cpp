#include <iostream>
using namespace std;

int main(void)
{
    int i;
    float result = 0.0;
    for (i = 1; i < 10; i++)
    {
        float tmp = 1 / i;
        result = result + tmp;
    }
    cout << "result = " << result << endl;
    return 0;
}
