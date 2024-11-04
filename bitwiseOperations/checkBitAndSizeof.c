#include <stdio.h>
int main (void)
{
    int num = 255U;
    int bit = 5;
    int res = num & (1<<bit); // 11111111 * 000100000 = 000100000= 1*2^5 = 32
    printf("res:%d\n", res);
    int sizeRes = sizeof(res); //sizeof позволяет определить число байт которое занимает переменная или тип данных
    double value = sizeof(10.0);
    printf("size of = %d double = %.2f", sizeRes, value); 
    
    return 0;
}