#include <stdio.h>

int main()
{

    char light;

    printf("enter signal light for currant status (g for green , r for red , y for yellow):- ");
    scanf("%c", &light);

    switch (light)
    {

    case 'g':
        printf("you can go");
        break;

    case 'r':
        printf("you have to stop");
        break;

    case 'y':
        printf("you have to be prepare for stop");
        break;

    default:
    {

        printf("you have entered wrong light signal");
    };
    }
}