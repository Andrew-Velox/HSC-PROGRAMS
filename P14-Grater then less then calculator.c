/* Conditional statement (if) */
/* Page: 445 */
/* Program: 15 */

#include <stdio.h>

int main(){
    
    int num1,num2;
    
    printf(" Enter num1= ");
    scanf("%d",&num1);
    
    printf(" Enter num2= ");
    scanf("%d",&num2);
    
    if(num1 == num2)
    printf("\n They are equal.");
    
    if(num1>num2)
    printf("\n %d is greater then %d", num1,num2);
    
    if(num1< num2)
    printf("\n %d is less then %d.", num1,num2);
    return 0;
    
    
    }
