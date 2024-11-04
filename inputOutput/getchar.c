#include <stdio.h>
int main (void)
{
    int value = getchar();
    // int res = putchar(value);
    putchar(value); // retur s - функция была вызвана ради побочного эффекта
    // printf("\n%d\n", res); //retrun s and 115 ASCII stdout standart flow
    int value1 = getchar();
    int value2 = getchar();
    printf("%c %c\n", value1, value2);
    // при завершение программы все буферы очищаются 
    return 0;
  // вывод - экран
    //putchar() - для вывода данных из потока stdout
    //printf() - форматный вывод строки из потока stdout
    //perror() -вывод ошибки из потока stderr
// ввод клава
    //getchar() - для ввода данных из потока stdin
    //scanf() - форматный ввод данных из потока stdin
}