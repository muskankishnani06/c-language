#include <stdio.h>

int main()
{

    char string[100];

    printf("enter a string:");

    fgets(string, sizeof(string), stdin);

    printf("entered string is %s", string);

    int i = 0;

    while (string[i] != '\0')
    {

        if (string[i] >= 'a' && string[i] <= 'z')
        {
            string[i] = string[i] - 32;
        }
        else if (string[i] >= 'A' && string[i] <= 'Z')
        {

            string[i] = string[i] + 32;
        }
        i++;
    }

    printf("\n toggle of the string is %s ", string);

    return 0;
}