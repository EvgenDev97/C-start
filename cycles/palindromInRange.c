#include <stdio.h>


int reversNum (int arg ){
    int revers =0;
    int num = arg;
    while(num != 0){
        revers = revers * 10;
        revers = revers + num % 10;
        num = num / 10;
    }
    return revers;
}


int main (void)
{
    int m,n; // m<n
    scanf("%d %d", &m, &n);

    for(int i = m; i<=n; i++){
        int res = reversNum(i);
        if(i == res){
            printf("%d ", i);
        }
    }
    return 0;
}