#include <stdio.h>

int main(void)
{
    short a, b;

    scanf("%hd, %hd", &a, &b);

    // здесь продолжайте программу
    short res;
    short *ptr_a = &a, *ptr_b = &b;
    res = *ptr_a * *ptr_b;
    printf("%d", res);
    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}