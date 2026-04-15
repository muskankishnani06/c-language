// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    
    int n=100000000;
    //for int now
    
    printf("%5d",n);
    
    // for float
    
    float num=3.14;
    
    // printf("\n%.2f",num);
    printf("\n%.3f",num);
    
    //for character
    
    char letter='a';
    
    printf("\n%5c",letter);
    
    //for string
    
    char string[50]="this is string";
    
    printf("\n%30s",string);

    return 0;
}