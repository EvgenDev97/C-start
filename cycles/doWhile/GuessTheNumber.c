#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void)
{
    int x;
    scanf("%d", &x);
    int a = 1, b = 1000;
    srand(time(NULL));
    int m = 0;

    do
    {   //generate random number [a;b] where a == 0; b == 1000;
        m = a + rand() % (b - a + 1); // random [0, 1000]
        // printf("%d \n", m);
        if(m <x){
            a = m;
        }else if (m > x){
            b = m;
        }
    } while ( m != x);
    
    printf("%d", x);
    return 0;
}