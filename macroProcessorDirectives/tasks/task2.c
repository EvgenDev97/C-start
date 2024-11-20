#include <stdio.h>
#define PI 3.1415
#define GRAD 180 / PI

int main (void)
{
    double rad, grad;
    scanf("%lf", &rad);
    grad = GRAD * rad;
    printf("%.2f", grad);
    return 0;
}
    