#include <stdio.h>

int main(void)
{
    int num = 255; // 0b11111111;
    int bit1 = 0; // сбрасываем 0-й бит
    int result = num & ~(1 << bit1);  //1 = 01 поскольку бит == сдвига не происходит. При поразрядном отрицании 1 = 11111110 = 254
    printf("result1: %d\n", result); 
 
    return 0;
}   