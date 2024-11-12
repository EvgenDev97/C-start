#include <stdio.h>

int main (void)
{
    double dl;
    scanf("%lf", &dl);
    int res = (dl >= -10 && dl < 0) || ( dl > 5 && dl <=12);
    printf("%d", res);
    return 0;
}