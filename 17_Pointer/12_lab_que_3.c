#include <stdio.h>

int main()
{

    int size;

    printf("enter a size of an array ");
    scanf("%d",&size);

    int arr[size];
    int *ptr[size];

    for (int i = 0; i < size; i++)
    {

        printf("arr[%d] ", i);
        scanf("%d",&arr[i]);


        ptr[i]=&arr[i];
    }

    printf("\nreserved array elements:");

    for (int i = size-1; i >=0; i--)
    {
        printf("%d ",(*ptr[i]*(*ptr[i])));
    }
    
    return 0;
}