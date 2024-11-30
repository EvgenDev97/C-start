#include <stdio.h>

int main(void)
{
    short a, b;

    scanf("%hd, %hd", &a, &b);
    short *ptr_a = &a, *ptr_b = &b;
    void *p;
    p = ptr_a;
    ptr_a = ptr_b;
    ptr_b = p;
    // здесь продолжайте программу
    printf("%d %d", *ptr_a, *ptr_b);
    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}