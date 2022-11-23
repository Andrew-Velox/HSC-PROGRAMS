/* C expression */
/* Page: 440 */
/* Program: 11 */

#include <stdio.h>

int main(){
    
    int a,b,sum;
    printf("Enter the value of a= ");
    scanf("%d", &a);
    printf("\nEnter the value of b= ");
    scanf("%d", &b);
    sum = a*a+2*a*b+b*b;
    printf("\n\tResult: %d",sum);
    
    return 0;
    
    
    }
