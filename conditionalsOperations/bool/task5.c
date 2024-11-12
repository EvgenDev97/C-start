#include <stdio.h>

int main (void)
{
    double x,y;
    scanf("%lf %lf", &x, &y);
    int res = (x > -5 && y > 0) && ( x <10 && y < 7);
    printf("%d", res);
    return 0;
}