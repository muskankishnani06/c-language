#include <stdio.h>

int main()
{

    int rowsize;

    printf("enter a rowsize of an array  ");
    scanf("%d", &rowsize);

    int colsize;

    printf("enter a colsize of an array  ");
    scanf("%d", &colsize);

    int arr[rowsize][colsize];

    for (int i = 0; i < rowsize; i++)
    {

        for (int j = 0; j < colsize; j++)
        {

            printf("array[%d][%d] ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    return 0;
}