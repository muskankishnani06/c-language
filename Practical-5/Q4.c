#include <stdio.h>

int main()
{
    int row, col;

    printf("Enter row size of array: ");
    scanf("%d", &row);

    printf("Enter column size of array: ");
    scanf("%d", &col);

    int arr[row][col];

    printf("Enter array elements:\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int rownumber, colnumber;
    int rowsum = 0, colsum = 0;

    printf("\nEnter row number: ");
    scanf("%d", &rownumber);

    if (rownumber >= 0 && rownumber < row)
    {
        printf("Elements of row %d: ", rownumber);

        for (int i = 0; i < col; i++)
        {
            printf("%d ", arr[rownumber][i]);
            rowsum += arr[rownumber][i];
        }

        printf("\nThe sum of row %d: %d\n", rownumber, rowsum);
    }
    else
    {
        printf("Invalid row number!\n");
    }

    printf("\nEnter column number: ");
    scanf("%d", &colnumber);

    if (colnumber >= 0 && colnumber < col)
    {
        printf("Elements of column %d: ", colnumber);

        for (int j = 0; j < row; j++)
        {
            printf("%d ", arr[j][colnumber]);
            colsum += arr[j][colnumber];
        }

        printf("\nThe sum of column %d: %d\n", colnumber, colsum);
    }
    else
    {
        printf("Invalid column number!\n");
    }

    return 0;
}