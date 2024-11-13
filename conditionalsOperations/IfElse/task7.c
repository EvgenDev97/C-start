#include <stdio.h>
#include <math.h>
int main (void)
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    double D = pow(b, 2.0) - 4*a*c;
    if (D >= 0){
        printf("real roots exist");
    }else{
        printf("%.0lf", D);
    }
    return 0;
}