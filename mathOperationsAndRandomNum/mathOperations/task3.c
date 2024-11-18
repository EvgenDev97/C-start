#include <stdio.h>

int main(void)
{
    int a1; // первый член прогрессии
    int a50; // 50-й член прогрессии

    scanf("%d, %d", &a1, &a50);
    int s = ((double)a1 + (double)a50)/2*50 ;
    printf("%d", s);
    // здесь продолжайте программу
    return 0;
}