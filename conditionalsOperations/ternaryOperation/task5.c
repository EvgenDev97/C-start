#include <stdio.h>

int main(void)
{
    short type = 0;
    double w, h;

    if(scanf("%hd %lf %lf", &type, &w, &h) != 3) {
        printf("Input error.");
        return 0;
    }

    // здесь продолжайте программу
    double res = (type == 1)? w*h : (type == 2)? 2*(w+h) : -1 ;
    res == -1.0? printf("%d", (int) res) : printf("%.1f",res);
    return 0;
}