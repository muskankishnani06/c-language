#include <stdio.h>

int main()
{

    char string[100];

    printf("enter the string:-");

    fgets(string, sizeof(string), stdin);

    int i = 0;

    for (i = 0; string[i] != '\0'; i++)
    {
    }

    int length = i;

    printf("\n the length of string is %d", length);

    for (i = 0; i < length; i++)
    {

        if (string[i] >= 'A' && string[i] <= 'Z')
        {

            string[i] = string[i] + 32;
        }
    }

    printf("the lowercase of string is %s", string);

    return 0;
}