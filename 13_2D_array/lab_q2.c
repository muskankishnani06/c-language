#include <stdio.h>

int main()
{

    int rowsize;

    printf("enter a rowsize of an array:-");
    scanf("%d", &rowsize);

    int colsize;

    printf("enter a colsize of an array:-");
    scanf("%d", &colsize);

    int a[rowsize][colsize], b[rowsize][colsize], c[rowsize][colsize];

    printf("enter first element of an array ");

    for (int i = 0; i < rowsize; i++)
    {

        for (int j = 0; j < colsize; j++)
        {

            printf("a[%d][%d] ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("enter second element of an array\n ");

    for (int i = 0; i < rowsize; i++)
    {

        for (int j = 0; j < colsize; j++)
        {

            printf("b[%d][%d] ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("array c is\n:- ");

    for (int i = 0; i < rowsize; i++)
    {

        for (int j = 0; j < colsize; j++)
        {

            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }

        printf("\n");
    }

    return 0;
}