#include <stdio.h>
#include <string.h>

int main()
{

    char str[100];

    printf("enter any string ");
    scanf("%s", str);

    int len = strlen(str);
    int i, j, flag = 1;

    for (i = 0, j = len - 1; i < j; i++, j--)
    {

        if (str[i] != str[j])
        {

            flag = 0;
            break;
        }
    }
    if (flag)
    {

        printf("the given string is a palindrome.");
    }
    else
    {

        printf("the given string is not a palindrome.");
    }

    return 0;
}