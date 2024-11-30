#include <stdio.h>

int main (void)
{
    unsigned int a,b;
    scanf("%d %d", &a, &b);
    int res = (a>>1)*(b>>1);
    printf("%d", res);
    return 0;
}