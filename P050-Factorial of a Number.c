/* Factorial of Number */
/* Page: 463 */
/* Program: 50 */


#include <stdio.h>

int main(){
    
    int num,i;
    int fact = 1;
    xx:
    
    printf(" Enter a number = ");
    scanf("%d",&num);
    
    
    if (num < 0){
        
        printf(" Negative number is not allowed.\n");
        
        goto xx;
        
        }
    for (i=1;i<=num;i=i+1){
        
        
        fact = fact * i;
        
        }
    
    printf(" Factorial of %d is = %d",num,fact);
        
    return 0;
    }
