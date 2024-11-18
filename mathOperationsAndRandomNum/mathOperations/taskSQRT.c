#include <stdio.h>
#include <math.h>

int main (void)
{
    int a;
    scanf("%d", &a);
    double res = (sqrt(3.0) * a)/6.0;
    printf("%.3f", res);
    return 0;
}