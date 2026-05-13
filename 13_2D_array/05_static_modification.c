#include <stdio.h>

int main()
{

    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printf("\n before modification element of a 2d array %d", arr[0][0]);

    arr[0][0] = 25;

    printf("\n after modification element of a 2d array %d", arr[0][0]);

    return 0;
}