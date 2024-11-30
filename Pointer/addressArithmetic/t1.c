#include <stdio.h>

int main (void)
{
    short* p = (short *)10;  // тип short 16 бит
    p++;
    printf("%u\n", p);

    double digs[100];
    double* p1 = &digs[2], *p2 = &digs[7];
    int count = p2 - p1;
    printf("%d", count);
    return 0;
}