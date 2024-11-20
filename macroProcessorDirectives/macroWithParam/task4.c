#include <stdio.h>

#define CELL_N(N)   cell_ ## N

int main(void)
{
    short cell_1 = 1, cell_2 = 2, cell_3 = 3;
    int n = 2;

    int res_1 = CELL_N(1) + 10;
    // int res_2 = CELL_N(n) * 2; - error
    int res_3 = CELL_N(1+2) * 3; // в лексему попадет значение cell_1 = 1 и в результате 1 + 2 * 3

    return 0;
}