#include <stdio.h>
#include <math.h>
#define PI 3.1415

int main (void)
{
    double degree,degreeRad,res;
    scanf("%lf", &degree);
    degreeRad = degree * PI/180;
    res = sin(degreeRad);
    printf("%.1f", res);
    return 0;

}