#include<stdio.h>

int main(){

    int num;

    printf("enter a number:-");
    scanf("%d",&num);

    if(num%2 == 0){

        goto even;
    }else{

        goto odd;
    }

    even:
    printf("given number is even");
    return 0;

    odd:
    printf("given number is odd");
    return 0;

    return 0;
}