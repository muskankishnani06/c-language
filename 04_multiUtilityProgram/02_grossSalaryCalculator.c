#include<stdio.h>

int main(){
    
    float baseSalary,HRA,DA,TA,grossSalary;
    
    printf("enter a basesalry=");
    scanf("%f",&baseSalary);
    printf("enter a HRA percentage=");
    scanf("%f",&HRA);
    printf("enter a DA percentage=");
    scanf("%f",&DA);
    printf("enter a TA percentage=");
    scanf("%f",&TA);    
    
    grossSalary =baseSalary*(1+(HRA+DA+TA)/100);
    
    printf("Gross Salary is %.2f",grossSalary);
    
    return 0;
    
}