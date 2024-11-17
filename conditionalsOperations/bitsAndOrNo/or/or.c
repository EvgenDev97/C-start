// включить отдельные биты переменной | - битовое или
#include <stdio.h>
int main (void)
{
    char flag = 8; //00001000
    char mask = 5 ; //00000101
    flag = flag | mask;
    printf("%d", flag);//13 00001101 
    return 0; 
}