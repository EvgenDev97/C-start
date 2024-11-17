#include <stdio.h>
//& битовое и - бинарная операция  - проверка на включенность
int main(void)
{
    unsigned char flag = 5; // 00000101
    unsigned char mask = 4; // 00000100;
    unsigned char res = flag & mask;
    if((flag & mask) == mask){
        printf("bit two is on\n");
    }else{
        printf("bit two is off\n");
    }
    // off bits
    flag = 13;
    mask = 5;
    flag = flag & ~mask;
    printf("flag %d\n", flag);
    return 0;
    
}