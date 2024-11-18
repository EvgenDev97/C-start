#include <stdio.h>
#include <math.h>

int main(void)
{
    int b1; // первый член прогрессии
    int q; // знаменатель прогрессии

    scanf("%d, %d", &b1, &q);
    int res = (pow((double)q, 4.0)-1)*(double)b1/(q-1);
    printf("%d", res);
    return 0;
}