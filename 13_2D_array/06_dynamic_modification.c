#include <stdio.h>

int main()
{

    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};


    int rowIndex, colIndex;

    printf("\nenter row index of an 2d array ");
    scanf("%d", &rowIndex);

    printf("\nenter col index of an 2d array ");
    scanf("%d", &colIndex);

    if ((int)rowIndex || (int)colIndex > 3)
    {

        return printf("\nindex number can't be accessed ");
    }
    int value;

    printf("\nenter update value ");
    scanf("%d", &value);

    printf("before update value %d", arr[rowIndex][colIndex]);

    arr[rowIndex][colIndex] = value;

    printf("after update value %d", arr[rowIndex][colIndex]);

    return 0;
}