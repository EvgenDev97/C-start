#include <stdio.h>

int main(void)
{
    int m, n;
    if(scanf("%d, %d", &m, &n) != 2) {
        printf("Input error.");
        return 0;
    }

    
    if( m % n == 0){
        printf("%d", m/n);
    }else{
        printf("%s", "division error");
    }
    return 0;
} 