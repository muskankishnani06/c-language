#include <stdio.h>

int main()
{
    char str1[] = "abc";
    char str2[] = "efg";
    char thirdString[10];

    int k;
    for (k = 0; str1[k] != '\0'; k++)
    {
        thirdString[k] = str1[k];
    }
    thirdString[k] = '\0';

    int i;

    int result1 = 0;
    for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            result1 = str1[i] - str2[i];
            break;
        }
    }
    printf("\nresult1 is %d", result1);

    int result2 = 0;
    for (i = 0; str2[i] != '\0' || str1[i] != '\0'; i++)
    {
        if (str2[i] != str1[i])
        {
            result2 = str2[i] - str1[i];
            break;
        }
    }
    printf("\nresult2 is %d", result2);

    int result3 = 0;
    for (i = 0; thirdString[i] != '\0' || str1[i] != '\0'; i++)
    {
        if (thirdString[i] != str1[i])
        {
            result3 = thirdString[i] - str1[i];
            break;
        }
    }
    printf("\nresult3 is %d", result3);

    return 0;
}