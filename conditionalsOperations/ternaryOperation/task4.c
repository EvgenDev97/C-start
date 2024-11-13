#include <stdio.h>

int main (void)
{
    int width, height;
    scanf("%d %d", &width, &height);
    int res = width > height? width + 8 : height + 8;
    printf("%d", res);
    return 0;

}