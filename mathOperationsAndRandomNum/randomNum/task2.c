#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    for (int i = 0; i<7; i++){
        printf("%d ", rand()%(N+1));
    }
    return 0;
}