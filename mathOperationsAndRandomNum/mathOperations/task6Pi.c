#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int main (void)
{
    double R;
    scanf("%lf", &R);
    double length = 2 * PI * R;
    printf("%.3f", length);
    return 0;
}