#include <stdio.h>
//при единичном сдвиге влево – целочисленное умножение числа на 2
int main (void)
{
    int a;
    scanf("%d", &a);
    int res = a <<3;
    printf("%d",res);
    return 0;
}