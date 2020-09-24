#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x, s=0, j;
    for(j=0; j<5; j++) {
        scanf("%d", &x);
        s += x;
    }
    printf("%d\n", s);
    return 0;
}
