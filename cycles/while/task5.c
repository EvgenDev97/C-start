#include <stdio.h>

int main (void)
{
    int a,b;
    scanf("%d %d", &a, &b);

    int counter = a;
    while (counter >= a && counter <= b )
    {
        if(counter % 3 == 0){
            printf("%d ", counter);
        }
        counter++;
    }
    return 0;

}