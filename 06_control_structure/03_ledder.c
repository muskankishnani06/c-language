#include <stdio.h>

int main()
{

    int marks;

    printf("enter your marks:-");
    scanf("%d", &marks);

    if (marks >= 90)
    {

        printf("you have achieved A grade");
    }
    else if (marks >= 80)
    {

        printf("you achieved B grade");
    }
    else if (marks >= 70)
    {

        printf("you achieved C grade");
    }
    else if (marks >= 50)
    {

        printf("you achieved C grade");
    }
    else if (marks >= 35)
    {

        printf("you achieved e grade");
    }
    else
    {

        printf("you are fail in this examination");
    }

    return 0;
}