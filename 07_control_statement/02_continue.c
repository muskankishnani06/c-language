#include <stdio.h>

int main()
{

    int num;

    printf("enter a number:-");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {

        // if (i % 2 == 0)
        // {
        //     continue;
        // }
        // printf("\n %d", i);

        if (i % 2 != 0)
        {
            continue;
        }
        printf("\n %d", i);
    }

    return 0;
}