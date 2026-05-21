#include <stdio.h>
#include <string.h>

int main()
{

    char string[20] = "good morning";

    printf("the original string is %s",string);

    char copystring[sizeof(string)];

    strcpy(copystring, string);

    printf("\ncopied string %s", copystring);

    return 0;
}