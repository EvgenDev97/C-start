#include <stdio.h>

int main(void)
{
    // здесь продолжайте программу
    int global = 0;
    int *global_ptr = &global;
    if(global_ptr != NULL)
        *global_ptr = 10;
    printf("%d", *global_ptr);
    return 0;
}