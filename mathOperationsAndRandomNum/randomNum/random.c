#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main (void)
{
    // time_t t = time(NULL);
    // srand(t);
    srand(time(NULL));
    // для определения диапазона
    int range = 10;
    int r1 = rand()%range; // [0, range)
    int r2 = rand()%range - 5; // [-5, range-5)    
    int r3 = rand() + rand();
    // для вещественных числе
    double range_float = (double)rand() / (double)RAND_MAX; // [0;1]
    printf("%d %d %d %.2f", r1, r2, r3, range_float);
    return 0;
}