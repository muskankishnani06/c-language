// #include <stdio.h>

// int main()
// {

//     char string[100];

//     printf("enter the string:-");

//     fgets(string, sizeof(string), stdin);

//     for (int i = 0; string[i] != '\0'; i++)
//     {

//         if (string[i] >= 'A' && string[i] <= 'Z')
//         {

//             string[i] = string[i] + 32;
//         }
//     }

//     printf("\n the small letter is %s", string);

//     return 0;
// }

// while

#include <stdio.h>

int main()
{

    char string[100];

    printf("enter the string:");

    fgets(string, sizeof(string), stdin);

     printf("\n entered string is %s", string);

    int i = 0;

    while (string[i] != '\0')
    {

        if (string[i] >= 'a' && string[i] <= 'z')
        {

            string[i] = string[i] - 32;
        }
        i++;
    }

    printf("\n The uppercase string is %s", string);

    return 0;
}