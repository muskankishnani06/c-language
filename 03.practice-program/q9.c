// #include<stdio.h>

// int main(){
    
//     float NUM=0.5 ,base=5,hight=10;
    
//     printf(" Area of triangle is %.1f",NUM*base*hight);
//     return 0;
    
// }

// scanf method

#include<stdio.h>

int main(){
    
   float NUM=0.5,base,hight;
    
    printf("Enter a base=");
    scanf("%f",&base);
    printf("Enter a hight=");
    scanf("%f",&hight);
    
    printf("\n  Area of triangle is=%.1f",NUM*base*hight);
    
    return 0;
    
    
}