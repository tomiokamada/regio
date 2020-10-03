#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[5], j, sum=0;
    for (j = 0; j < 5; j++) {
        /* とりあえず a[0]-a[4]に
           値を格納してみる */
        scanf("%d", &a[j]);
    }

    for (j = 0; j < 5; j++) {
        sum += a[j];
    }
    printf("%d\n", sum);
    return 0;
}
