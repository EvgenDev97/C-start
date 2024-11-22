#include <stdio.h>

int main (void)
{
    int n,m;
    scanf("%d %d", &n, &m);
    int i = n;
    for(; i<=m; i++){
        if(i%2 == 0) printf ("%d ", i);
    }
    return 0;
}