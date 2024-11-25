#include <stdio.h>

int main (void)
{
    
    int n;
    scanf("%d", &n);
    //итерация по строкам
    for(int i = 1; i <=n; i++){
        //итерация по звездочкам
        for(int j = 1; j <=i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}