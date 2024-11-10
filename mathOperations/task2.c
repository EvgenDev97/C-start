#include <stdio.h>
#include <math.h>

int main(void)
{
    int h,w;
    scanf("%d %d", &h, &w);
    double res = (double)h / (double)w ;
    printf("%.2f", res);
    return 0;
}