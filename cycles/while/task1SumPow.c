#include <stdio.h>
#include <math.h>
int main (void)
{
    int a;
    
    while ( scanf("%d", &a) == 1 && a !=0)
    {   
        
        printf("%.0f ", pow(a, 2.0));
    }
    return 0;
    
}