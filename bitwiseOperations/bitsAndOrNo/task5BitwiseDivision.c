#include <stdio.h>
//при единичном сдвиге бит числа вправо получаем целочисленное деление числа на 2
int main (void)
{
    int a;
    scanf("%d", &a);
    int res = a >> 2;
    printf("%d", res);
    return 0;
}