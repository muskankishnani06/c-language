#include <stdio.h>

int main()
{

    float c, java, html, total, average;

    printf("enter mark of c:-");
    scanf("%f", &c);

    printf("enter mark of java:-");
    scanf("%f", &java);

    printf("enter mark of html:-");
    scanf("%f", &html);

    total = c + java + html;
    average = total / 3;

    printf("total marks is:-%.2f", total);

    printf("\naverage mark is:-%.2f:-", average);

    return 0;
}