// 10101
//  0101
//   101
//    01
//     1

#include <stdio.h>

int main()
{

    int n = 5;

    for (int i = 1; i <= n; i++)
    {

        for (int j = n - i; j >= n; j++)
        {

            printf(" ");
        }
        for (int k = i; k <= 1; k++)
        {

            if (k % 2 == 1)
            {
                printf("1");
            }
            else
            {

                printf("0");
            }
            
            printf("\n");
        }

    
    }

    return 0;
}