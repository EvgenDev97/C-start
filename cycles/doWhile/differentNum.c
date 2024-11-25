#include <stdio.h>

int main (void)
{
    int x,y;
    scanf("%d %d", &x, &y);
    int a,b,c;
    //итерация по диапазону
    for (int i = x; i <= y; i++){
        int a = i / 100; // get hundred
        int b = (i / 10) % 10; // get ten
        int c = i % 10; // get one

        if( (a != b) && (a != c )&& (b != c)){
            printf("i= %d ", i);
        }
    }
    return 0;
}