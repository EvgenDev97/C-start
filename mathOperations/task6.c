#include <stdio.h>

int main (void)
{
    int a,b,h;
    scanf("%d, %d, %d", &a, &b, &h );
    double res = ((double)a +(double)b )*(double)h/2.0;
    printf("%.1f", res);
    return 0;
}