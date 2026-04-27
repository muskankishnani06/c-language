#include <stdio.h>

int main()
{

    int num;

    printf("enter any number :-");
    scanf("%d", &num);

    if (num < 0)
    {

        printf("number is negative");
    }
    else if (num > 0)
    {

        printf("number is positive");
    }
    else
    {

        printf("number is neutral");
    }

    return 0;
}
