#include <stdio.h>
#include <ctype.h>

int main()
{

    char string[100];

    printf("enter any string:-");

    fgets(string, sizeof(string), stdin);

    char uppercase[sizeof(string)];
    
    for (int i = 0; string[i] != '\0'; i++)
    {

        uppercase[i] = toupper(string[i]);
    }

    printf("\n the entered string is %s", string);

    printf("\n the uppercase string is %s", uppercase);

    return 0;
}