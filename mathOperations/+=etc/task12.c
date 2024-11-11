#include <stdio.h>
int main (void)
{
    int a;
    scanf("%d", &a);
    double res =(double)(a*=3600.0)/1000;
    printf("%.1f", res);
    return 0;
}