#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    // здесь продолжайте программу
    int r1, r2, r3, r4, r5;
    srand(time(NULL));
    r1 = rand();
    r2 = rand();
    r3 = rand();
    r4 = rand();
    r5 = rand();
    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}