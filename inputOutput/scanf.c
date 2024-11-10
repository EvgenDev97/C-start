#include <stdio.h>

int main(void)
{
    // char byte1 = '0', byte2 = '0' ;
    // // у вхдоного потока stdin есть буфер, и если в буфере есть данные, послед вызов scanf() будет считывать эти данные , не ожидая ввода с клавиатуры
    // int res = scanf("%c %c", &byte1, &byte2);
    // // int res2 = scanf("%c", &byte2);
    // //любоая переменная - непрерывная последовательность байт
    // //& возвращает адрес этой переменной. Зная адрес функция scanf() имеет возможность изменять переменную byte, записывая данные в опеределенную ячейку памяти
    // // Если данные были успешно прочитаны и занесены в переменную byte, то функция scanf() возвратит значение 1.
    // // Это говорит нам, что в одну переменную были успешно занесены данные из потока stdin.
    // printf("res=%d: byte1 = %c byte2 = %c\n",res, byte1, byte2);

    // long long var_lli = 0;
    // double var_d = 0;
    // int res = scanf("%lld %lf", &var_lli, &var_d); // сначала приводит к типу int и только потом записывает в lli
    // printf("res=%d: val_lli=%lld\n val_0=%.2f",res , var_lli, var_d );


    // unsigned int price = 0;
    // double weight = 0; // lf for double т.к scanf записывает значение во float
    // int res = scanf("%*llu; %u;  %lf", &price, &weight);
    // printf("res=%d price=%d weight=%.2f\n", res, price, weight);
    int a = 0;
    int b = 0;
    int res = scanf("%d %d", &a,&b);
    printf("a=%d b=%d", a, b);

    return 0;
}