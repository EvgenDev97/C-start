#include <stdio.h>

int main (void)
{
    int n;
    scanf("%d", &n);
    if(( n*n ) % 24 == 1)
        printf("yes");
    else if (n == 2 || n == 3)
    {
        printf("yes");
    }else 
        printf("no");
    return 0;
}