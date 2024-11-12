#include <stdio.h>

int main (void)
{
    double dl;
    scanf("%lf", &dl);
    int res = dl > -5.45 && dl < 10.37;
    printf("%d", res);
    return 0;
}