#include <stdio.h>

int main(void)
{
    unsigned char bits;
    scanf("%hhu", &bits);
    unsigned char mask = 0b00001001;
    bits = bits ^ mask;
    printf("%d", bits);
    return 0;
}