#include <stdio.h>
#include <string.h>

int main()
{

    char correctEmail[] = "admin@gmail.com";
    char correctPassword[] = "123456";

    char email[100], password[100];

    printf("enter your email:-");
    scanf("%s", &email);

    printf("enter your Password:-");
    scanf("%s", &password);

    if (strcmp(email, correctEmail) == 0 && strcmp(password, correctPassword) == 0)
    {
        printf("login successful.");
    }
    else
    {

        printf("\nlogin failed. Invalid credentials.");
    }

    return 0;
}