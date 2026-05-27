#include <stdio.h>

int main()
{

    int numArray[5] = {10, 20, 30, 40, 50};

    int *ptr;

    ptr = numArray;

    printf("%d", *ptr);

    for (int i = 0; i < 5; i++)
    {

        printf("\n%u=>%d", (ptr + i), *(ptr + i));
    }

    return 0;
}