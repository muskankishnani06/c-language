#include<stdio.h>

int main(){

    int marks;

    printf("enter your marks:-");
    scanf("%d",&marks);

    if(marks<=35){

        printf("you are fail in this examination");
    } else{

        printf("you pass in this examination");
    }

    return 0;
}