#include <stdio.h>
/*
Проверка на включенность: flags & mask == mask

Выключение бита: flags & mask

Включение бита: flags | mask

Переключение бита: flags ^ mask

Инверсия бит: ~number тоже что и -number - 1

Смещение бит вправо: number >> 1 тоже что и number // (2 ** 1)

Смещение бит влево: number << 1 тоже что и number * (2 ** 1)
*/
#include <stdio.h>
//P.S. Нумерация бит числа идет в порядке от младшего к старшему и начинается с нуля: 7, 6, 5, 4, 3, 2, 1, 0
// 
int main(void)
{
    unsigned char bits;
    scanf("%hhu", &bits);

    unsigned char mask = 0b00101000; // маска для проверки битов 3 и 5

    if ((bits & mask) == mask) {
        printf("%hhu\n", bits); // если биты 3 и 5 установлены, выводим bits
    } else {
        printf("-1\n"); // если биты 3 и 5 не установлены, выводим -1
    }

    return 0;
}