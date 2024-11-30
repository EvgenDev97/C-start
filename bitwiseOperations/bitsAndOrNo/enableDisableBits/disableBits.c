#include <stdio.h>
#include <stdint.h>

int main (void)
{
    int count;
    scanf("%d", &count);
    count = (uint32_t) count;
   uint8_t mask = ~(0b11000010); // Инвертируем биты 7,6 и 1, остальные - 1
   uint8_t *bytes = (uint8_t *)&count;
   for (int i = 0; i <sizeof(count); i++)
   {
    bytes[i] &= mask;
   }
   printf("%d", count);
    return 0;
}