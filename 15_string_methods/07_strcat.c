#include <stdio.h>
#include<string.h>

int main()
{

    char word1[] = "good ";
    char word2[] = "morning";

    strcat(word1, word2);

    printf("the concat string is %s ", word1);

    return 0;
}