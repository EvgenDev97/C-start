#include <stdio.h>
#include <math.h>
int main(void)
{
    int k, m;
    if(scanf("%d, %d", &k, &m) != 2) {
        printf("Input error.");
        return 0;
    }

    k < m ? printf("%.0f", pow(k, 2.0)) : printf("%.0f", pow(m, 2.0)); // pow return double
    return 0;
}