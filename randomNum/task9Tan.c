#include <stdio.h>
#include <math.h>
int main(void)
{
    int a, b;
    scanf("%d, %d", &a, &b);
    double tan, degreeRad;
    tan =(double) a/b;
    degreeRad = atan(tan);
    printf("%.2f %.2f", tan, degreeRad);
    return 0;
}