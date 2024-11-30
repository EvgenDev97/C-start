int g = 4;
int *ptr = &g;
printf("ptr = %u\n", ptr); - %u - вывод адреса указателя

#include <stdio.h>
 побайтный вывод содержимого
int main(void) 
{
         int g = 476789;
         char *ptr = (char *)&g;
 
         for(int i = 0;i < sizeof(g); ++i) {
                   printf("%d ", *ptr);
                   ptr++;
         }
 
         return 0;
}