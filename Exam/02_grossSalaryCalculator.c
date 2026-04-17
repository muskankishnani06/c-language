#include<stdio.h>

int main(){

    float baseSalary,HRA,TA,DA,grossSalary;

    printf("enter baseSalary=");
    scanf("%f",&baseSalary);

     printf("enter Hra percentage=");
    scanf("%f",&HRA);

    printf("enter Ta percentage=");
    scanf("%f",&TA);

    printf("enter Da percentage=");
    scanf("%f",&DA);

    grossSalary=baseSalary*(1+(HRA+TA+DA)/100);

    printf("Gross salary is %.2f",grossSalary);

    return 0;


}