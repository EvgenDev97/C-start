#include <stdio.h>

#define MAX_WIDTH       1280
#define GET_WIDTH(W) W <= MAX_WIDTH ? W :  MAX_WIDTH   // здесь продолжайте определение макро-функции

int main(void)
{
    int width;
    scanf("%d", &width);
    int res = GET_WIDTH(width);
    printf("width = %d", res );
    // здесь продолжайте программу

    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}