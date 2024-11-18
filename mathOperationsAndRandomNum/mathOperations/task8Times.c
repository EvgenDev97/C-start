#include <stdio.h>
typedef unsigned short VAL;

int main(void)
{
    unsigned short time_h = 10; // часы
    unsigned short time_m = 33; // минуты
    unsigned short time_s = 5; // секунды

    unsigned short h, m, s; // добавляемое время: h - часы; m - минуты; s - секунды
    scanf("%hu; %hu; %hu", &h, &m, &s);

    
    int resulTime = (time_h*3600 + h*3600) + (time_m*60 + m*60) + (time_s + s);
    VAL sec = resulTime % 60;
    VAL min = (resulTime / 60) % 60;
    VAL hours=  resulTime / 3600;
    printf("%02d:%02d:%02d",hours,min,sec);
    
    return 0;
}