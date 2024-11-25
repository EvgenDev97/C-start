#include <stdio.h>

int main (void)
{
    int a = 0, res = 0;

    do
    {
        scanf("%d", &a);
        if( a >= 0) res +=a;
    } while (a != 13);
    
    printf("%d", res);
    return 0;
}