#include <stdio.h>

int checkBalance(int balance)
{

    return balance;
}
int withraw(int amount)
{
    int remainBalance = checkBalance(1000);

    if (amount < remainBalance)
    {

        int balance = remainBalance - amount;
        return balance;
    }
    else
    {

        printf("insufficient balance");
    }
}

int main()
{

    int checkRemainBalance = withraw(15000);

    printf("\n the remain balance is %d", checkRemainBalance);

    return 0;
}