#include <stdio.h>
int main (void)
{
    int s,m;
    scanf("%d %d", &s, &m);
    double sk = (double)m/100.0;
    double res = (s*=2) - (s*sk);
    printf("%.2f",res);
    return 0;
}