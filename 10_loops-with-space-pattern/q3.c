//     5
//    44
//   333
//  2222
// 11111

#include<stdio.h>

int main(){
    
    int n=5;
    
    for(int i=n;i>=1;i--){
          
        for(int j=n-i;j<=n;j++){
            
            printf(" ");
        }
        
        for(int k=i;k<=n;k++){
            
            printf("%d",i);
        }
        
        printf("\n");
    }
    
    return 0;
}