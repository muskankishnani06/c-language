#include <stdio.h>

int main()
{

    int size;

    printf("enter size of array:-");
    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++)
    {

        printf("array[%d]=", i);
        scanf("%d", &array[i]);
    }

    printf("length of an array:%d", size);
    return 0;
}
