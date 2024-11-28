#include <stdio.h>

int main(void)
{
    int init, k;

    scanf("%d", &init);
    k = init;

    int *ptr_k = &k;
    *ptr_k = k + 10;

    // здесь продолжайте программу

    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}