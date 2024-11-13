#include <stdio.h>
#include <math.h>
int main(void)
{
    unsigned int a, b, c;
    if(scanf("%u, %u, %u", &a, &b, &c) != 3) {
        printf("Input error.");
        return 0;
    }

    // здесь продолжайте программу
    int res = pow(a,2.0) + pow(b,2.0) == pow(c,2.0);
    if( res) printf("yes");
    else printf("no");
    
    return 0;
}