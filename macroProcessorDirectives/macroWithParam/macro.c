#include <stdio.h>

#define SP_QR(A,B) (A) * (B)
//#-возвращает текстовое представление лексемы ## - склеивание двух лексем в одну
#define TEXT(A,B) "square of rectange (" #A ") x (" #B ") \n" 
#define X_N(N) x ## N
int main (void)
{
    int res = SP_QR(2,3);
    int x1=1, x2=-2, x4 = 10;
    printf("%d", X_N(4));
    
    return 0;
}