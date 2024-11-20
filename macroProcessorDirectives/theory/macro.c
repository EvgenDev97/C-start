//#define <macro name> [macro body]
//https://proproprogs.ru/c_base/c_direktivy-makroprocessora-define-i-undef
#include <stdio.h>

#define MENU_TRANSL 1
#define  MENU_ADD 2
#define MENU_EXIT 3
#define MENU_FMT "something string %d\n"
#define FIRST_LETTER 'a'

int main (void)
{
    int item;
    scanf("%d", &item);

    switch (item)
    {
    case MENU_TRANSL :
        printf("%d", item);
        break;
    case MENU_ADD:
        printf("%d", item);
        break;

    case MENU_EXIT:
        printf("%d", item);
        break;
    
    default:
        break;
    }
}
