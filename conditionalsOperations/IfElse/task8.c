#include <stdio.h>

int main (void)
{
    double a,b,c;
    scanf("%lf, %lf, %lf", &a, &b, &c);
    if(a > b){
        if( b > c) printf ("%.2f",c);
        else if (b < c) printf ("%.2f", b);
    }
    else if (b > a){
        if( a > c) printf ("%.2f", c);
        else if (c > a) printf ("%.2f", a);
    }else if (c > a && c >b){
        if(a >b) printf("%.2f", b);
        else if (b > a) printf("%.2f",a);
    }
    return 0;
}