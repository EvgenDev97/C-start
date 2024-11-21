#include <stdio.h>

int main (void)
{
    int a,b;
    scanf("%d %d", &a, &b);
    if(a<b){
        int temp = a;
        a = b; // a == b
        b = temp; // a > b
    }

    while (b > 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    printf("%d", a);
    return 0;
}