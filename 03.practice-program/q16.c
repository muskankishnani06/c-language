#include <stdio.h>

int main()
{

    int a, b;

    printf("enter value of a:-");
    scanf("%d", &a);

    printf("enter value of b:-", b);
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("after swap");
    printf("\nvalue of a : %d", a);
    printf("\nvalue of b : %d", b);

    return 0;
}