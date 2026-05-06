// 12345
// 1234
// 123
// 12
// 1
// 1
// 12
// 123
// 1234
// 12345

#include <stdio.h>

int main()
{

    int n = 5;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i + 1; j++)
        {

            printf("%d", j);
        }
        printf("\n");

    }

    for(int i=1;i<=n;i++){

        for (int k = 1; k <= i; k++)
        {

            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}