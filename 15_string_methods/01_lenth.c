#include <stdio.h>
#include <string.h>

// int main()
// {

//     char string[] = "any random string";

//     int length = strlen(string);

//     printf("\n the  length of string is %d", length);

//     return 0;
// }

int main()
{

    char string[100];

    printf("enter any string:-");

    fgets(string, sizeof(string), stdin);

    int i = 0;

    for (i = 1; string[i] != '\0'; i++)
    {
    }

    printf("\n length of string is %d", i - 1);

    return 0;
}