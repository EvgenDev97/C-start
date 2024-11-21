#include <stdio.h>
#include <math.h>
int main (void)
{
    int num, i = 1;
    scanf("%d", &num);
    double S = 0.0;
    while (i <= num){
        S = S + 1/pow(i, 2.0);
        i++;
    }
    printf("%.3f", S);
    return 0;
}