#include <stdio.h>

int main()
{

    float firstAngle, secondAngle, thirdAngle;

    printf("Enter First Angle value=");
    scanf("%f", &firstAngle);

    printf("Enter second Angle value=");
    scanf("%f", &secondAngle);

    thirdAngle=180-(firstAngle+secondAngle);

     printf("Enter second Angle value= %.2f",thirdAngle);
    

    return 0;
}
