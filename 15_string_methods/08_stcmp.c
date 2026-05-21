#include <stdio.h>
#include <string.h>

int main()
{

    char str1[] = "abc";
    char str2[] = "efg";

    char thirdString[sizeof(str1)];

    strcpy(thirdString, str1);

    int result1 = strcmp(str1, str2);

    printf("\n result is %d ", result1);

    int result2 = strcmp(str2, str1);

    printf("\n result is %d ", result2);

    int result3 = strcmp(thirdString, str1);

    printf("\n result is %d ", result3);

    return 0;
}