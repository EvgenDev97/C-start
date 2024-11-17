#include <stdio.h>
//~ унарная операция битовое не
int main (void)
{
    unsigned char var = 153; // 10011001
    unsigned char not_var = ~var; // 01100110 - 102
    printf("var=%d not_var=%d", var, not_var);
    return 0;
}