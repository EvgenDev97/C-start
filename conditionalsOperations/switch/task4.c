#include <stdio.h>

int show_menu(void)
{
    char menu_item;
    
    printf("a) learning english\n\
    b) learning C/C++\n\
    c) learning mathematic\n\
    d) learning Python\n");

    // здесь прописывайте функцию scanf() и оператор switch
    scanf("%c", &menu_item);
    switch (menu_item)
    {
    case 'a':
    case 'A':
        return 1;
    
    case 'b':
    case 'B':
        return 2;
    case 'c':
    case 'C':
        return 3;
    case 'd':
    case 'D':
        return 4;
    default:
        return -1;
    }
    
}

int main(void)
{
    int item = show_menu();
    printf("%d", item);
    // здесь выводите значение переменной item

    return 0;
}