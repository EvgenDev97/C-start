#include <stdio.h>

int main(void)
{
    // здесь продолжайте программу
    int a,b;
    double d;
    scanf("%d %d %*lf %lf", &a, &b,  &d);
    printf("%d %d %.2f ", a,b,d);
    return 0;
}