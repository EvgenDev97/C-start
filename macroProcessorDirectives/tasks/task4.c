#include <stdio.h>
#include <math.h>
#define MAX_LENGTH 100

int main (void)
{
    int x,y;
    scanf("%d %d", &x, &y);
    double length = sqrt(pow(x, 2.0)+ pow(y,2.0));
    if(length > MAX_LENGTH) printf("Radius length exceeds value of MAX_LENGTH");
    else printf("%.2f", length);
    return 0;
}