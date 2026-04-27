#include <stdio.h>

int main()
{

    int a, b, c;

    printf("enter value of a:-");
    scanf("%d", &a);

    printf("enter value of b:-");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("after swap");
    printf("\n value of a is :%d", a);
    printf("\n value of b is :%d", b);

    return 0;
}