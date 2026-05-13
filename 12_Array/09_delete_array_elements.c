#include <stdio.h>

int main()
{

    int size;

    printf("enter array size:-");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {

        printf("array[%d]:-", i);
        scanf("%d", &arr[i]);
    }

    printf("\nprinting array\n");

    for (int i = 0; i < size; i++)
    {

        printf("%d", arr[i]);
    };

    int pos;

    printf("\nenter array position to delete");
    scanf("%d", &pos);

    printf("\nprinting  before deleted value %d ", arr[pos]);

    for (int i = pos; i < size - 1; i++)
    {

        arr[i] = arr[i + 1];
    }
    size--;

    printf("\nprinting after updated value %d\n", arr[pos]);

    printf("\nafter delete update array");

    for (int i = 0; i < size; i++)
    {

        printf("\n%d", arr[i]);
    };

    return 0;
}