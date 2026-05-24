#include <stdio.h>

char *greeting()
{

    char *msg = "good morning";
    return msg;
}

int main()
{

    char *message = greeting();

    printf("%s", message);

    return 0;
}