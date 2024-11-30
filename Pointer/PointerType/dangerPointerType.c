#include <stdio.h>

int main(void)
{
    short var; //2 byte

    scanf("%hd", &var);

    short *ptr_var = &var;
    char *ptr_ch; // 1 byte
    ptr_ch = (char *) ptr_var;
    *ptr_ch = 2;
    printf("%d", var); // if var > 255  printf != 2;
    // здесь продолжайте программу

    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}