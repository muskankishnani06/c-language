#include <stdio.h>

int factorial(int num)
{

    if (num < 0)
    {

        printf("factorial of negative is not defined ");
    }
    else if (num == 1 || num == 0)
    {

        return 1;
    }
    else
    {

        return num * factorial(num - 1);
    }
}

int main()
{
    int result1 = factorial(5);

    printf("\n the result1 is %d", result1);

     int result2 = factorial(15);

    printf("\n the result1 is %d", result2);

    return 0;
}