#include <stdio.h>

int main()
{

    int size;

    printf("enter size of an array:-");
    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++)
    {

        printf("array[%d]=", i);
        scanf("%d", &array[i]);
    }

    printf("first element of an array = %d", array[0]);


     printf("\nenter element for modification:-");
    scanf("%d", &array);

    printf(" \n After modification %d", array[0]);
    
    int pos;

    printf("\nenter array position to delete:-");
    scanf("%d", &pos);

    printf("\nprinting  before deleted value %d ", array[pos]);

    for (int i = pos; i < size - 1; i++)
    {

        array[i] = array[i + 1];
    }
    size--;

    printf("\nprinting after updated value %d\n", array[pos]);

    printf("\nafter delete update array");

    for (int i = 0; i < size; i++)
    {

        printf("\n%d", array[i]);
    };



    return 0;
}