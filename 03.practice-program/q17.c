#include <stdio.h>

int main()
{

    int firstNumber, secondNumber;

    printf("enter First number:-");
    scanf("%d", &firstNumber);

    printf("enter second number:-");
    scanf("%d", &secondNumber);

    if (firstNumber < secondNumber)
    {

        printf("minimum value is:-%d", firstNumber);
    }else{

        printf("minimum value is:-%d", secondNumber);

    }

    return 0;
}