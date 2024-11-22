#include <stdio.h>


int main (void)
{
    int num, res1 = 0, res2 = 0;
    scanf("%d", &num);
    int temp = num;
    int secondPartOfNum = temp % 1000;
    int firstPartOfNum = temp / 1000;
    for(;firstPartOfNum != 0 && secondPartOfNum != 0;)
    {
        res1 = res1 + firstPartOfNum % 10;
        firstPartOfNum = firstPartOfNum / 10;

        res2 = res2 + secondPartOfNum % 10;
        secondPartOfNum = secondPartOfNum / 10;
    }

    res1 == res2? printf("yes") : printf("no");
    return 0;
}