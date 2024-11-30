#include <stdio.h>

int main (void)
{
    int a,b,c,d;

    scanf("%d %d %d %d", &a,&b,&c,&d);
    if((a>c && b>d) || (a>d && b>c))
        printf("yes");
    else
        printf("no");
    return 0; 
}