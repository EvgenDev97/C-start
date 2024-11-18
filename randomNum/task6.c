#include <stdio.h>
#include <math.h>
int main(void)
{
    unsigned short N;
    scanf("%hu", &N);

    // здесь продолжайте программу
    double res = ((N * 7)/100.0);
    res = ceil(res);
    printf("%.0f", res);
    return 0;
}