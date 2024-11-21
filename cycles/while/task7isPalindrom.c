#include <stdio.h>

int main (void)
{
     int a, reversVal = 0;
     scanf("%d", &a);
     int temp = a;

     while (temp != 0)
     {
        reversVal = reversVal * 10;
        reversVal = reversVal + temp%10;
        temp = temp / 10;
     }
     if( a == reversVal){
        printf("yes");
     }else{
        printf("no");
     }
     return 0;
}

