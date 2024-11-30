#include <stdio.h>

int main (void)
{
    int arg = 777;

    int *ptr_arg;
    char *ptr_a;
    ptr_arg = &arg;
    printf("%d \n", *ptr_arg);
    // ptr_a = ptr_arg; error: assignment to 'char *' from incompatible pointer type 'int *'
    ptr_a = (char *) ptr_arg; //pointer type cast. ptr_arg will be type char
    *ptr_a = 7;
    printf("%d %d", *ptr_arg, *ptr_a);
    //for adress save
    void *p;
    p = ptr_a;
    p = ptr_arg;
    // *p = 10; error: invalid use of void expression

    // check pointer
    int ptrA = 5;
    int *ptr = NULL; // if the pointer takes on a value , it means it has not been initialized
    ptr = &ptrA;
    if (ptr != NULL)
        *ptr =12;
    return 0;

}