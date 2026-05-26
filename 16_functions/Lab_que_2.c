#include <stdio.h>

void checkDividable(int num)
{

    if (num % 3 == 0 && num % 5 == 0)
    {

        printf("number is dividable with both 3 & 5");
    }
    else
    {
    }
}

int main()
{

     checkDividable(5);
     checkDividable(15);

    return 0;
}