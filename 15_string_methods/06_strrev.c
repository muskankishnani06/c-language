#include <stdio.h>
#include <string.h>

int main()
{

    char word[6] = "hello";

    char reversestring[sizeof(word)];

    int length = strlen(word);

    int i, j;

    for (i = length - 1, j = 0; i >= 0; i--, j++)
    {

        reversestring[j] = word[i];
    }

    reversestring[j] = '\0';

    printf("the reverse string is %s", reversestring);

    return 0;
}


