#include <stdio.h>
int main (void)
{
    int a;
    scanf("%d", &a);
    if (a == 1) printf ("понедельник");
    else if (a == 2) printf ("вторник");
    else if (a == 3) printf ("среда");
    else if (a == 4) printf ("четверг");
    else if (a == 5) printf ("пятница");
    else if (a == 6) printf ("суббота");
    else if (a == 7) printf ("воскресенье");
    else printf("неверный номер дня недели");
    return 0;
}