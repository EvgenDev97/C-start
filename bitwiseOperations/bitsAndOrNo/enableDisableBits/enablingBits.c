#include <stdio.h>
#include <stdint.h>

int main() {
    uint32_t count; // Используем uint32_t для ясности и переносимости

    // printf("Введите целое число: ");
    if (scanf("%u", &count) != 1) {
        printf("Ошибка ввода.\n");
        return 1;
    }

    // Маска для установки 3-го и 0-го битов
    uint8_t mask =  0b00001001;

    // Обработка каждого байта
    uint8_t* bytes = (uint8_t*)&count; // Приведение к указателю на байты
    for (int i = 0; i < sizeof(count); ++i) {
        bytes[i] |= mask; // Установка битов с помощью побитовой операции ИЛИ
    }

    printf("Измененное значение: %u\n", count);
    return 0;
}
