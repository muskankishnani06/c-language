#include <stdio.h>

int main()
{

    int rowsize, colsize;

    printf("enter row size of an array:-");
    scanf("%d", &rowsize);

    printf("enter col size of an array:-");
    scanf("%d", &colsize);

    int arr[rowsize][colsize];

    printf("enter array element:-");

    for (int i = 0; i < rowsize; i++)
    {

        for (int j = 0; j < colsize; j++)
        {

            printf("arr[%d][%d] ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int largest = arr[0][0];

    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            if (arr[i][j] > largest)
            {

                largest = arr[i][j];
            }
        }
    }

    printf("the largest element is: %d\n", largest);

    return 0;
}