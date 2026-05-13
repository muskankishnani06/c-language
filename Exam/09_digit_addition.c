#include <stdio.h>

int main()
{
    int num, firstDigit, lastDigit, sum, temp;

    printf("Enter any number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    temp = num;
    while (temp >= 10)
    {
        temp = temp / 10;
    }

    firstDigit = temp;

    sum = firstDigit + lastDigit;

    printf("The sum of the first and last digit: %d", sum);

    return 0;
}