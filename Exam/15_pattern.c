#include <stdio.h>

int main()
{

    int n = 5;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {

            printf("%d", j);
        }

        for (int k = 2 * (n - i); k >= 1; k--)
        {

            printf(" ");
        }

        for (int l = i; l >= 1; l--)
        {

            printf("%d", l);
        }

        printf("\n");
    }

    return 0;
}
