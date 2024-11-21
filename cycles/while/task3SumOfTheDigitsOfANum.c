#include <stdio.h>

int main() {
   int num, sum = 0, digit;
    scanf("%d", &num);

    int temp = num;
    while(temp > 0)
    {   digit = temp % 10;
        sum += digit;
        temp /= 10;

    }
    printf("%d", sum);
    return 0;

}