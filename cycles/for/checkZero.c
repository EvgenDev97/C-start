#include<stdio.h>

int main(){

    int n = 1;
    int res = 0;
    for (;n!= 0;){
        scanf("%d",&n);
        if (n!=0) res = res * 10 + n;
    }

    printf("%d", res);

    return 0;

}