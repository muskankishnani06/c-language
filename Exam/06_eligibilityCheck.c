#include<stdio.h>

int main(){

    int marks;
   

    printf("Enter your marks:-");
    scanf("%d",&marks);

   char grade = (marks>=90)?'A':
                (marks>=80)?'B':
                (marks>=70)?'C':
                (marks>=35)?'D': 'F';

        printf("Your Grade is %c",grade);

        switch (grade) {
        case 'A':
            printf("\nExcellent work!");
            break;
        case 'B':
            printf("\nWell done!");
            break;
        case 'C':
            printf("\nGood job.");
            break;
        case 'D':
            printf("\nYou passed, but you could do better.");
            break;
        case 'E':
            printf("\nYou passed.");
            break;
        case 'F':
            printf("\nSorry, you failed.");
            break;
    }

    if(grade>='A' && grade<='D'){

        printf("\nCongratulations! you are eligible for next level");
    }else{

        printf("\nPlease try again next time");
    }

    return 0;
    
}


