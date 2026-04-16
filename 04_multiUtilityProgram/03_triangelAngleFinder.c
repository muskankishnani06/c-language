#include<stdio.h>

int main(){
    
    float firstAngle,secondAngle,thirdAngle;
    
    printf("Enter First angle value=");
    scanf("%f",&firstAngle);
    printf("Enter second angle value=");
    scanf("%f",&secondAngle);
    
    thirdAngle=180-(firstAngle+secondAngle);
    
    printf("The third angle value is %02f",thirdAngle);
    
}