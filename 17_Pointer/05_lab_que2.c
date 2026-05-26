#include <stdio.h>

int main()
{

    int a, b, c;

    int *p1, *p2;

    printf("enter value of a ");
    scanf("%d", &a);

    printf("\nenter value of b ");
    scanf("%d", &b);

    printf("\nBefore swapping:\n");
    printf("a=%d\n", a);
    printf("b=%d\n", b);

    p1 = &a;
    p2 = &b;

    c = *p1;
    *p1 = *p2;
    *p2 = c;

    printf("\nAfter swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}