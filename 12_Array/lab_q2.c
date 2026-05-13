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

    int sum = 0;

    for (int i = 0; i < size; i++)
    {

        sum += array[i];
    }

    float avarage = sum / size;

    printf("average of array is %.1f ", avarage);

    return 0;
}
