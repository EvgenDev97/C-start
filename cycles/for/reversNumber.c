#include <stdio.h>

int main (void)
{
    int num, a = 0; //4235
    scanf("%d", &num );
    int temp = num;

    for(; temp != 0;){
        a = a * 10;
        a = a + temp % 10;
        temp = temp / 10;
    }
    printf("%d", a);
    return 0;
}