#include <stdio.h>

int main(void)
{
    int count = 0;
    int s = 0;

    while(count++ <= 5)
        s += count;
        printf("%d", s);
    
    return 0;
}