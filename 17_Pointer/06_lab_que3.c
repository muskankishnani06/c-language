#include <stdio.h>

int main()
{

    int arr[100], i, size;

    int *ptr;

    printf("enter array size ");
    scanf("%d", &size);

        for (i = 0; i < size; i++)
    {
        printf("enter array element:");
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    printf("square of each element \n");

    for (i = 0; i < size; i++)
    {
        printf("%d ", (*(ptr + i)) * (*(ptr + i)));
    }

    return 0;
}