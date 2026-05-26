#include <stdio.h>

int cube(int num)
{

    if (num < 0)
    {

        printf("cube of negative is not defined ");
    }
    else if (num == 1 || num == 0)
    {

        return 1;
    }
    else
    {

        return num * num * num;
    }
}

int main()
{

    int result1 = cube(5);

    printf("result is %d", result1);

    return 0;
}