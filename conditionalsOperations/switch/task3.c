#include <stdio.h>

int main(void)
{
    char menu_item;
    short menu_number = 0;

    printf("a) learning english\n\
b) learning C/C++\n\
c) learning mathematic\n\
d) learning Python\n");

    if(scanf("%c", &menu_item) != 1) {
        printf("Input error.");
        return 0;
    }

    // здесь продолжайте программу
    switch (menu_item)
    {
    case 'a':
    case 'A':
        printf("%d",menu_number = 1);
        break;
    case 'b':
    case 'B':
        printf("%d",menu_number = 2);
        break;
    case 'c':
    case 'C':
        printf("%d",menu_number = 3);
        break;
    case 'd':
    case 'D':
        printf("%d",menu_number = 4);
        break;
    default:
        printf("%d",menu_number = -1);
        break;
    }
    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}