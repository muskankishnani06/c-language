#include <stdio.h>

int main()
{

    int num = 24;

    int *ptr1;

    ptr1 = &num;

    printf("%u=>%d\n", ptr1, *ptr1);

    // chain of pointer

    int *ptr2;

    ptr2 = ptr1;

    printf("\nmemory address:-%u=>%d", ptr2, *ptr2);

    *ptr2 = 50;

    printf("\nmemory address:-%u=>%d", ptr1, *ptr1);

    return 0;
}