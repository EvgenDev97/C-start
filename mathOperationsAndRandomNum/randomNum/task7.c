#include <stdio.h>
#include <math.h>
int main(void)
{
    unsigned short N;
    scanf("%hu", &N);

    // здесь продолжайте программу
    double res =round( N * 2.54);
    printf("%.0f", res);
    return 0;
}