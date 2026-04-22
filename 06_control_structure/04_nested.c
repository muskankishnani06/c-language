#include <stdio.h>

int main()
{

    int age, drivingLicence;

    printf("enter your age:-");
    scanf("%d",&age);

    if(age>=18){

        printf("you have driving licence (if no enter 0)(if yes enter 1):-");
        scanf("%d",&drivingLicence);
    }

    if(age>=18){

        if(drivingLicence == 1){


        printf("\n you are eligible for driving");

        }else{

                printf("\n you have to register on parivahan sarthi");
        }
    
    }else{
        
        printf("you'r age is not eligible");
    }

    return 0;
}