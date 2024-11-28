//указатели служат для записи и считывания данных из произвольных участков памяти
//прямой доступ к памяти
// это число типа int
//<data type>*<pointer name> хранит адрес переменной
// что бы узнать адрес переменной - &
#include <stdio.h>

int main(void)
{

    int d = 10;
    int* gpt =  &d;
    // gpt = &d;
    printf("gpt=%p, *gpt= %d d= %d\n", gpt, *gpt, d );

    *gpt = 75432;
    printf("gpt=%p, *gpt= %d d= %d\n", gpt, *gpt, d );

    return 0;

}