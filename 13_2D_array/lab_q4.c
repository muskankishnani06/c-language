#include <stdio.h>

int main()
{

    int arr[5][5];
    int sum = 0;

    printf("enter an array elements:-");

    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5; j++)
        {

            printf("array [%d][%d]", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("boundary elemnets :-\n");

    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5; j++)
        {

            if (i == 0 || i == 4 || j == 0 || j == 4)
            {

                printf("%d", arr[i][j]);
                sum = sum + arr[i][j];
            }
            else
            {

                printf(" ");
            }
        }
        printf("\n");
    }

    printf("sum of boundary elements %d", sum);
    return 0;
}