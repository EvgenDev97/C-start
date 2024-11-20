#include <stdio.h>
const int max_size = 5;

#define SIZE    1
#define IS_CPP

int main (void)
{
    #ifdef IS_CPP // ifdef (IS_CPP) будет ошибкой
    printf("hello");
    #else 
    printf("world!");
    #endif
    return 0;
}