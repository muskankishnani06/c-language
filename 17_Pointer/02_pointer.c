#include <stdio.h>

int main()
{

    int a = 24;

    int *ptr;

    ptr = &a;

    printf("memory address is %u ",ptr);
    printf("\nthe value is %d ",*ptr);
    printf("\npointer address is %p ",ptr);
    return 0;
}