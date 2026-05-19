#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{

    char string[100];

    printf("enter any string:-");

    fgets(string, sizeof(string), stdin);

    char lowercase[sizeof(string)];

    for (int i = 0; string[i] != '\0'; i++)
    {

        lowercase[i] = tolower(string[i]);
    }

    printf("\n the entered string is %s", string);

    printf("\n the lowercase string is %s", lowercase);

    return 0;
}


