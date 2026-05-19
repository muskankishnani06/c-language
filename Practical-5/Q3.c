#include <stdio.h>

int main()
{

    int row, col;

    printf("enter a row size of an array:-");
    scanf("%d",&row);

    printf("enter a col size of an array:-");
    scanf("%d",&col);

    int arr[row][col];

    printf("enter array element:-\n");

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            printf("arr[%d][%d]", i, j);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Transpose matrix is :- \n");

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {

            printf("%d", arr[j][i]);
        }

        printf("\n");
    }

    return 0;
}