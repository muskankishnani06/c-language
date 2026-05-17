#include <stdio.h>

int main()
{
    char string[] = "Muskan";

    char specificCharacter = string[0];

    printf("\n%c", specificCharacter);

    for (int i = 0; i < 6; i++)
    {
        printf("\n%c", string[i]);
    }

    return 0;
}