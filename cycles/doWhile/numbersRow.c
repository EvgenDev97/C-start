
#include <stdio.h>

int main (void)
{
    int i;
    scanf("%d", &i);
    double S = 1.0;
    
    do
    {
        if( i == 1){
        printf("%.2lf", S);
        return 0;
    }
        S += 1./i;
        i--;
    } while ( i>1);
    
    printf("%.2lf", S);
    return 0;

}

