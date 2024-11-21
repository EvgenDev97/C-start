#include <stdio.h>

int main (void)
{
    int i = 100, j = 999;
    int count = i;

    while ( count >= i && count <= j)
    {
        if(count % 47 == 6 || count % 53 == 45 ){
            printf("%d ", count);
        }
        count++;
    }
    return 0;
    
}