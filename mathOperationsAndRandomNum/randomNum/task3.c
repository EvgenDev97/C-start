#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i = 0; i <10; i++){
        
        printf("%d ", rand() % (b - a + 1) + a);

    }
    return 0;
}