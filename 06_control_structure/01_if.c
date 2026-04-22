#include<stdio.h>

int main(){

    int marks;

    //condition not satisfied;

    printf("enter your marks:-");
    scanf("%d",&marks);

    if(marks<=35){

        printf("you are fail in this examination");

    }

    int age;

    printf("\nenter your age:-");
    scanf("%d",&age);

    if(age>=18){

        printf("you are eligible for voating");
    }

    return 0;


}
