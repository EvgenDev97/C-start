#include <stdio.h>

int main(void)
{
    unsigned char bits;
    scanf("%hhu", &bits);
    unsigned char mask = 0b00010101;
    // здесь продолжайте программу
    bits = bits | mask;
    printf("%d", bits);
    return 0;
}