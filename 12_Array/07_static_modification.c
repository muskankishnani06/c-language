#include<stdio.h>

int main(){

    int numArray[5]={10,20,30,40,50};

    printf("before modification %d",numArray[0]);

    numArray[0]=1000;

    printf(" \n After modification %d",numArray[0]);




    return 0;
}