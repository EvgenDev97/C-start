#include <stdio.h>
#include <math.h>

int main (void)
{
    double a,b,c;
    double D, x1,x2;
    if(scanf("%lf %lf %lf", &a, &b, &c) != 3){
        printf("INPUT ERROR");
        return 0;
    }
    D = pow(b,2.0) -4*a*c;
    if(D < 0) {
        printf("D<0 %.2f ", D);
        return 0;
    }
    D = sqrt(D);
    x1 = -(b + D)/ (2.0*a);
    x2 = -(b - D) / (2.0*a);
    printf("%.2f %.2f", x1, x2);
    return 0;
}