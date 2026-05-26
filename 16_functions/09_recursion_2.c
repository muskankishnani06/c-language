#include <stdio.h>

int sum(int num)
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

        return num + sum(num - 1);
    }
}

int main()
{

    int result1 = sum(5);

    printf("result is %d", result1);

    return 0;
}