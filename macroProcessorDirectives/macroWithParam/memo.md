task4.c
когда работает препроцессор никаких вычислений не производится, только копируется текст
сложные выражения в макроопределениях лучше избегать, т.к. они вполне могут служить источником непредвиденных ошибок. Поэтому чаще всего директиву #define применяют для задания констант в виде чисел или строк и много реже в виде каких-либо выражений.

https://proproprogs.ru/c_base/c_direktiva-define-dlya-opredeleniya-makrosov-funkciy