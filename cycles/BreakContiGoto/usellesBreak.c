#include <stdio.h>
#include <math.h>
int main (void)
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i<n; i++){
        if(pow(i, 2.0) < n)
            printf("%d ", i);
        else
            break;
    }
    return 0;
}