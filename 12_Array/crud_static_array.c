
// #static 

#include <stdio.h>

int main()
{

    // insert

    int array[5] = {10, 20, 30, 40, 50};
    int size = 5;

    //read
    
    printf("first element of an array= %d", array[0]);
    printf("\nsecond element of an array= %d", array[1]);
    printf("\nthird element of an array= %d", array[2]);
    printf("\nforth element of an array= %d", array[3]);
    printf("\nfifth element of an array= %d", array[4]);


    // modification

    printf("\nbefore modification %d", array[0]);

    array[0] = 80;

    printf(" \n After modification %d", array[0]);

    //delete

    int pos;

    printf("\nenter array position to delete:-");
    scanf("%d", &pos);

    printf("\nprinting  before deleted value %d ", array[pos]);

    for (int i = pos; i < size - 1; i++)
    {

        array[i] = array[i + 1];
    }
    size--;

    printf("\nprinting after updated value %d\n", array[pos]);

    printf("\nafter delete update array");

    for (int i = 0; i < size; i++)
    {

        printf("\n%d", array[i]);
    };

    return 0;
}