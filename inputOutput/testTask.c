#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int c = a; 
    a = b; 
    printf("%d %d",a, c);
    return 0;
}   