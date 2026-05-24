#include <stdio.h>

int calculator(int a, int b, char operation)
{

    if (operation == '+')
    {

        return a + b;
    }
    else if (operation == '-')
    {

        return a - b;
    }
    else if (operation == '*')
    {

        return a * b;
    }
    else if (operation == '/')
    {

        return a / b;
    }
    else if (operation == '%')
    {

        return a % b;
    }
    else
    {

        printf("invalid operations");
    }
}

int main()
{

    int value1, value2;
    char operation;

    printf("enter operation you want to perform (+,-,*,/,%):-");
    scanf("%c", &operation);

    printf("enter second value:-");
    scanf("%d", &value1);

    printf("enter first value:-");
    scanf("%d", &value2);

    int result = calculator(value1, value2, operation);

    printf("\n the result is %d", result);

    return 0;
}