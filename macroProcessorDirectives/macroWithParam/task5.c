#include <stdio.h>

// здесь объявляйте макроопределение
#define MUL_VAR_NAME(a,b)  mul_##a##_##b
int main(void)
{
    // здесь продолжайте программу
    int a,b;
    scanf("%d %d", &a, &b);
    int MUL_VAR_NAME(a,b) = a * b; 
    printf("%d", MUL_VAR_NAME(a,b));
    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}