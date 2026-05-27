#include <stdio.h>

int callByReference(int *num)
{

    *num = 100;
}

int main()
{

    int numArgument = 24;

    int *ptr = &numArgument;

    int result = callByReference(ptr);

    printf("Argument result by call by reference %d ", numArgument);

    return 0;
}