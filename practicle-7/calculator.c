#include <stdio.h>

int main()
{
    int choice;
    float num1, num2, result;

    do
    {
        printf("\nPress 1 for +");
        printf("\nPress 2 for -");
        printf("\nPress 3 for *");
        printf("\nPress 4 for /");
        printf("\nPress 5 for %%");
        printf("\nPress 0 for exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5)
        {
            printf("Enter the first number: ");
            scanf("%f", &num1);

            printf("Enter the second number: ");
            scanf("%f", &num2);
        }

        switch (choice)
        {
            case 1:
                result = num1 + num2;
                printf("Addition of %.0f and %.0f is %.0f\n", num1, num2, result);
                break;

            case 2:
                result = num1 - num2;
                printf("Subtraction of %.0f and %.0f is %.0f\n", num1, num2, result);
                break;

            case 3:
                result = num1 * num2;
                printf("Multiplication of %.0f and %.0f is %.0f\n", num1, num2, result);
                break;

            case 4:
                if (num2 != 0)
                {
                    result = num1 / num2;
                    printf("Division of %.0f and %.0f is %.2f\n", num1, num2, result);
                }
                else
                {
                    printf("Division by zero is not possible\n");
                }
                break;

            case 5:
                printf("Modulus of %.0f and %.0f is %.0f\n", num1, num2, (int)num1 % (int)num2);
                break;

            case 0:
                printf("Program exited successfully\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 0);

    return 0;
}