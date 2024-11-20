#include <stdio.h>
#define KMH s_mc * 3600/1000.0

int main (void)
{
    int s_mc;
    scanf("%d", &s_mc);
    double s_kmh = KMH;
    printf("%.2f", s_kmh);
    return 0;
}