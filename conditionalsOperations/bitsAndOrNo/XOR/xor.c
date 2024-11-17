// переключение битов -^
#include <stdio.h>
int main (void)
{
    char flag = 9; //00001001
    char mask = 1 ; //00000001
    flag = flag ^ mask;
    printf("%d", flag); //8
    return 0;
}