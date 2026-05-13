#include <stdio.h>

int main()
{

    int rowsize;

    printf("enter a rowsize of an array:- ");
    scanf("%d", &rowsize);

    int colsize;

    printf("enter a colsize of an array:- ");
    scanf("%d", &colsize);

    int arr[rowsize][colsize];
    int sum = 0;

    for (int i = 0; i < rowsize; i++)
    {

        for (int j = 0; j < colsize; j++)
        {

            printf("array[%d][%d] ", i, j);
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }

    float average = sum / (rowsize * colsize);

    printf("\n average of array %.2f", average);

    return 0;
}