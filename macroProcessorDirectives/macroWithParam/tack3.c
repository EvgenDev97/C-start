#include <stdio.h>
#include <math.h>

#define GIPOT(a,b) sqrt(pow(a,2.0) + pow(b, 2.0)) 
// здесь объявляйте макро-функцию

int main(void)
{
    int a, b;
    if(scanf("%d, %d", &a, &b) != 2) {
        printf("Input error");
        return 0;
    }
    double res = GIPOT(a +3 ,b - 2);
    printf("%.2lf", res);
    // здесь продолжайте программу

    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}