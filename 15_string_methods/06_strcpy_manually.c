#include <stdio.h>
#include <string.h>

int main()
{

    char string[20] = "good morning";

    printf("the original string is %s ", string);

    char copystring[20];

    int i = 0;

    for (i = 0; string[i] != '\0'; i++)
    {

        copystring[i] = string[i];
    }

    copystring[i] = '\0';

    printf("\ncopied string %s ", copystring);

    return 0;
}