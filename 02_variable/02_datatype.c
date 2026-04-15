
// Online C compiler to run C program online
#include<stdio.h>

int main(){
    
    //for integer
    int n=1;
    
    printf("%d",n);
    
    
    //for float
    
    float decimal=2.255;
    
    printf("\n%f",decimal);
    
    
    //for char
    
    char character='m';
    
    printf("\n%c",character);
    
    
    //for string
    
    char *string="this is string";
    
    printf("\n%s",string);
    
    //modifyable
    
    char anotherstring[50]= "this is another string";
    
    printf("\n%s",anotherstring);
    
    anotherstring[2]='w';
    
    printf("\n%c",anotherstring[2]);
    
    return 0;
    
}

