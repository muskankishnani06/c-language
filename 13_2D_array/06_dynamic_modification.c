#include <stdio.h>

int main()
{

    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // printf("\n element of a 2d array %d", arr[0][0]);

    int rowIndex, colIndex;

    printf("\nenter row index of an 2d array ");
    scanf("%d", &rowIndex);

    printf("\nenter col index of an 2d array ");
    scanf("%d", &colIndex);

    if (rowIndex < 0 || rowIndex >= 3 || colIndex < 0 || colIndex >= 3)
    {
        printf("\nindex number can't be accessed ");
        return 0;
    }
    int value;

    printf("enter update value ");
    scanf("%d", &value);

    printf("before update value %d", arr[rowIndex][colIndex]);

    arr[rowIndex][colIndex] = value;

    printf("after update value %d", arr[rowIndex][colIndex]);

    return 0;
}