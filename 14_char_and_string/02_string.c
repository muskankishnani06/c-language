#include <stdio.h>

int main()
{

    char string[5] = {'h', 'e', 'l', 'l', 'o'};

    printf("%s", string);

    char greeting[] = "\nhi there good morning";

    printf("%s", greeting);

    char *message = "hello very good morning";

    printf("\n%s", message);

    return 0;
}