#include <stdio.h>
int main( void)
{
    int a_i = -1234;
    double var_d = 53.12345;
    printf("[%-10d]\n", a_i); //вырванивание по левому краю, 10 - минимальная ширина поля выводимой информации
    printf("[%-10d]\n", var_d);
}