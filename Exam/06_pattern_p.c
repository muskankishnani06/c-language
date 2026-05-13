#include <stdio.h>
int main()
{
    int n = 5;
    // Top row
    for (int j = 0; j < n; j++)
        printf("* ");
    printf("\n");
    // Middle rows
    for (int i = 1; i < n - 1; i++)
    {
        printf("* ");
        for (int s = 1; s < n - 1; s++)
            printf("  ");
        printf("*\n");
    }
    // Bottom row
    for (int j = 0; j < n; j++)
        printf("* ");
    printf("\n");
    // Remaining stars
    printf("*\n*\n");
    return 0;
}