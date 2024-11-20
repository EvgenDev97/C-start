// #define LANG_C
// https://proproprogs.ru/c_base/c_direktivy-include-i-uslovnoy-kompilyacii
#if defined(LANG_C)
# include <stdio.h>
#else
#include <iostream> 

#endif


int main (void)
{
    int x = 5;
#ifdef LANG_C // = if defined
    printf("%d", x);
#else
    std::cout << x << std::endl;
#endif
    return 0;
}