#include <stdio.h> /* 標準I/O library の宣言を取り込み */

int main(void) {
    char filename[] = "output.txt";
    FILE *fpout = fopen(filename, "w");
    if(fpout == NULL) {
        fprintf(stderr, "Can not open file\n");
        return 1;
    }

    fprintf(fpout, "Hello World\n"); /* 文字列 */

    fprintf(fpout, "%d %f\n", 10, 1.0); /* 整数、浮動小数 */

    char name[] = "Taro";    /* 文字列 */
    fprintf(fpout, "Hello World, %s.\n", name);


    /* 浮動小数の込み入った例 */
    fprintf(fpout, "%f %.2f %e\n", 10.1, 10.1, 10.1); 

    double v =(((1.0)/1000)/1000)/1000;
    fprintf(fpout, "%f %.2f %e\n",v,v,v); 

    fprintf(fpout, "%f %f\n", 1.0/0.0, 0.0/0.0);

    return 0;
}
