#include <stdio.h>
#include <string.h>

int main()
{

    char word1[20] = "good";
    char word2[] = " morning";

    printf("\nthe original word1 is %s", word1);
    printf("\nthe original word2 is %s", word2);

    int i,j;

    for (i = 0; word1[i] != '\0'; i++)
    {
    }

    for (j = 0; word2[j] != '\0'; j++, i++)
    {

        word1[i] = word2[j];
    }

    word1[i] = '\0';

    printf("\nthe concat string is %s ", word1);

    return 0;
}