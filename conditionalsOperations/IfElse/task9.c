# include <stdio.h>

int main (void){
    double a,b,c;
    scanf("%lf, %lf, %lf", &a,&b,&c);
    if(a >b && a>c){
        if(a < b +c){
            printf("yes");
        }else{
            printf("no");
        }
    }else if (b>a && b>c){
        if(b < a + c) printf("yes");
        else printf ("no");
    }else if ( c > a && c >b){
        if (c < a + b) printf ("yes");
        else printf("no");
    }
    return 0;
}