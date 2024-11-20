#include <stdio.h>

#define FIVE 5
# define TEN 2 * FIVE
#undef TEN // отмена макроса
#define TEN 3 * 5
#define TEXT "text msg \
two line"
#define PRINT_D printf("digit = %d\n", digit)
#define FORMAT "digit = %d\n"

int main(void)
{
    int digit = FIVE;
    PRINT_D;
    digit = TEN;
    printf(FORMAT, digit);
    printf(TEXT, "\n");
    return 0;
}