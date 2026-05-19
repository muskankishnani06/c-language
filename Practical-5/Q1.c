#include <stdio.h>

int main()
{

    int size;

    printf("enter a size of an array:");
    scanf("%d", &size);

    int arr[size];

    printf("enter array element:-\n");

    for (int i = 0; i < size; i++)
    {

        printf("array[%d] ", i);
        scanf("%d", &arr[i]);
    }

    printf("Negative elements of array are: ");

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {

            printf("%d ", arr[i]);
        }
    }

    return 0;
}