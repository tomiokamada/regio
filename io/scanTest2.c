#include <stdio.h>

int main(void) {
    char filename[] = "scanTest.txt";
    FILE *fpin = fopen(filename, "r");
    if(fpin==NULL) {
        fprintf(stderr, "Can not open file¥n");
        return 1;
    }

    /* int への読み込み */
    int x;
    fscanf(fpin, "%d", &x); 
    printf("Input: %d\n", x);

    /* 配列要素への読み込み */
    int y[2]; 
    fscanf(fpin, "%d %d", &y[0], &y[1]); 
    printf("Input: %d %d\n", y[0], y[1]);

    /* float の読み込み */
    float v;
    fscanf(fpin, "%f", &v);   
    printf("Input: %f\n", v);

    /* double の読み込み */
    double v2;  
    fscanf(fpin, "%lf", &v2);  
    printf("Input: %f\n", v2);

    /* 単語の読み込み */
    char str[101]; /* 問題仕様に合わせて十分なサイズを確保すること */
    fscanf(fpin, "%s", str);   /* 空白で区切られた文字の読み込み */
    printf("Input: %s\n", str);

    /* 行の読み込み */
    char line[101]; /* 問題仕様に合わせて十分なサイズを確保すること*/
    fgets(line, 101, fpin);   /* 改行(or 100文字)まで読込み */
    printf("Input: %s", line);/* line 最後は"改行","ヌル" */
    fgets(line, 101, fpin);   /* 改行(or 100文字)まで読込み */
    printf("Input: %s", line);/* line 最後は"改行","ヌル" */

    return 0;
}
