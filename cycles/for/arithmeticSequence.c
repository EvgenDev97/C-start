#include <stdio.h>

int main(void)
{
    int a1, d, n;
    scanf("%d; %d; %d", &a1, &d, &n);

    // здесь продолжайте программу
    for( int i = 1; i <=n; i++ ){
        int res = a1 + (i-1)*d;
        printf("%d ",res);
    }
    return 0;
}