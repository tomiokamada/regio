#include <stdio.h> /* 標準I/O library の宣言を取り込み */

int main(void) {
    printf("Hello World\n"); /* 文字列 */

    printf("%d %f¥n", 10, 1.0); /* 整数、浮動小数 */

    char name[] = "Taro";    /* 文字列 */
    printf("Hello World, %s.\n", name);


    /* 浮動小数の込み入った例 */
    printf("%f %.2f %e\n", 10.1, 10.1, 10.1); 

    double v =(((1.0)/1000)/1000)/1000;
    printf("%f %.2f %e\n",v,v,v); 

    printf("%f %f\n", 1.0/0.0, 0.0/0.0);

    return 0;
}
