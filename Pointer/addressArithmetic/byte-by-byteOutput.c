#include <stdio.h>

int main (void)
{
    double value;

    scanf("%lf", &value);
    char *ptr = (char *) &value;
    for (size_t i = 0; i < sizeof(value); i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
    
    // здесь продолжайте программу

    return 0;
}