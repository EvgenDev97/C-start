#include <stdio.h>

int main (void)
{
    double dl;
    scanf("%lf", &dl);
    int res = (int)dl % 5 == 0;
    printf("%d", res);
    return 0;
}