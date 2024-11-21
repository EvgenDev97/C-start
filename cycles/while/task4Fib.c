#include <stdio.h>
 
int main (void)
{
    int n;
    scanf("%d", &n);
    
    int a = 1, b = 1;
    int i = 0;


    while (i < n) {
        printf("%d ", a);
        int next = a + b;
        a = b;
        b = next;
        i++;
    }
    printf("\n");
}