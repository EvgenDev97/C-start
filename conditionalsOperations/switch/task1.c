#include <stdio.h>

int main (void)
{
    int item; // or char scanf(%c &val) char in C is number value
    printf("enter value 1 or 2: ");
    if(scanf("%d", &item )!= 1) printf("error input") ;
    switch (item)
    {
    case 1:
        printf("hello!");
        break; // or return 0
    case 2:
        printf("world!");
        break;
    default:
        printf("no value");
        break;
    }
    
}   