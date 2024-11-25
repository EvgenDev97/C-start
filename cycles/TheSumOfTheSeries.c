#include <stdio.h>
#include <math.h>
int main (void)
{
    int m,n,k;
    scanf("%d %d %d", &m, &n, &k);
    double res = 1.0/(n+m+k);
    double sum = 0;
    for(int i = 0; i <= m; i++){
        for(int j =0 ; j<=n; j++){
            for(int t = 0; t <= k; t++){
                sum = (pow(j, 2.0)) / (pow((i+t),3.0) - t);
            }
        }

    }
    res = res * sum ;
    printf("%lf", res);
    return 0;
}