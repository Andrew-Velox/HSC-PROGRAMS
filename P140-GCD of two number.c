/* GCD OF TWO NUMBER */
/* Page: 485 */
/* Program: 140*/


#include <stdio.h>

int main(){
    
    int num1,num2,sum,i;
    
    printf("  Enter two Number : ");
    scanf("%d %d",&num1,&num2);
            
    for(; num2>0;){
        
        sum = num1 % num2;
        num1 = num2;
        num2 = sum;
    
    }
    printf("Answere = %d ",num1);
    return 0;
    
    }
