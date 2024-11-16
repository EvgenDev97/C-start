#include <stdio.h>

int main(void)
{
    char symbol;
    if(scanf("%c", &symbol) != 1) {
        printf("Input error.");
        return 0;
    }
    switch (symbol)
    {
    case 'a':
        symbol = 'A';
        printf("%c", symbol);
        break;
    case 'b':
        symbol = 'B';
        printf("%c", symbol);
        break;
    case 'c':
        symbol = 'C';
        printf("%c", symbol);
        break;
    case 'd':
        symbol = 'D';
        printf("%c", symbol);
        break;
    case 'e':
        symbol = 'E';
        printf("%c", symbol);
        break;
    case 'f':
        symbol = 'F';
        printf("%c", symbol);
        break;        
    default:
        break;
    }
    // здесь продолжайте программу

    
    return 0;
}