#include <stdio.h>

int main()
{

    int size;

    printf("enter the size of an array");
    scanf("%d", &size);

    int arr[size][size];

    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++)
        {

            printf("array[%d][%d] ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("printing the array \n");

    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++)
        {

            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    int AntiDiagonalSum = 0;

    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++)
        {

            if (i + j == size - 1)
            {

                AntiDiagonalSum += arr[i][j];
            }
        }
    }
    printf("sum of anti diagonal array is %d", AntiDiagonalSum);

    return 0;
}