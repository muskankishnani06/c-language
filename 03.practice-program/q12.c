#include <stdio.h>

int main()
{

    int x, y, result;

    printf("enter value of x:-");
    scanf("%d", &x);

    printf("enter value of y:-");
    scanf("%d", &y);

    result = (x + y) * (x + y);

    printf("result is :- %d", result);

    return 0;
}