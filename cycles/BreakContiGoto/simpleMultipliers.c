#include <stdio.h>

int main (void)
{
    int n;
    scanf("%d", &n);
    int i;
    int value = n;
    for(i = 2; i<=n; ){
        if(value % i == 0 ){
            value = value / i;
            printf("%d ", i);
        }else if (value % i !=0)
        {
            i++;
        }
         else if (value == 0){
            break;
        }
    }
    return 0;
}