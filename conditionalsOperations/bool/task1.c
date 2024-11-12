#include <stdio.h>

int main (void)
{
    int a;
    scanf("%d", &a);
    int res = a % 5 == 0;
    printf("%d", res * 100); // if true, return 1
    return 0;
}