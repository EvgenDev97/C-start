#include <stdio.h>
#include <math.h>
int main(void)
{
    int b1, q, n;
    scanf("%d; %d; %d", &b1, &q, &n);

    // здесь продолжайте программу
    for( int i = 1; i <= n; i++){
        int res = b1 * pow(q, i-1);
        printf("%d ",  res);
        
    }
    return 0;
}