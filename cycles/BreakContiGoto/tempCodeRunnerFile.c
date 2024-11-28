#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    // Простые числа должны быть больше 1
    if (n <= 1) {
        return false;
    }

    // Проверка на делимость от 2 до квадратного корня из n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; // Если делится нацело, то не простое
        }
    }

    return true; // Если не делится ни на что, то простое
}

int main() {
    int n;
    if (isPrime(n)) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}
