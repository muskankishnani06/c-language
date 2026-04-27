#include <stdio.h>

int main()
{

    int firstNumber, secondNumber, thirdNumber, largest;

    printf("Enter value of first number: ");
    scanf("%d", &firstNumber);

    printf("Enter value of second number: ");
    scanf("%d", &secondNumber);

    printf("Enter value of third number: ");
    scanf("%d", &thirdNumber);

    largest = (firstNumber > secondNumber) ? (firstNumber > thirdNumber ? firstNumber : thirdNumber) : (secondNumber > thirdNumber ? secondNumber : thirdNumber);

    printf("number is the largest number among all %d", largest);

    return 0;
}
