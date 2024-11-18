#include <stdio.h>

int main(void)
{
    int angle;
    scanf("%d", &angle);
    angle = angle % 360; // [0:359]
    // здесь продолжайте программу
    printf("%d", angle);
    return 0;
}