#include <stdio.h>

int main()
{

    int num;

    printf("enter a number:-");
    scanf("%d", &num);
    int sum = 0;

    for (int i = 0; i <= num; i++)
    {

        sum += i;
    }

    printf("\n total is %d", sum);

    return 0;
}