/* Calculate grade according to marks */
/* Page: 486 */
/* Program: 141*/


#include <stdio.h>

int main(){
    
    int n,sum,i;
    
    printf(" Enter Your Score : ");
    scanf("%d",&n);
            
    if((n>=80) && (n<=100))
    printf(" Your grade is A+");
    
    else if((n>=70) && (n<=79))
    printf(" Your Grade is A");
    
    else if((n>=60) && (n<=69))
    printf(" Your Grade is A-");
    
    else if((n>=50) && (n<=59))
    printf(" Your grade is B");
    
    else if((n>=40) && (n<=49))
    printf(" Your Grade is C");
    
    else if((n>=33)&& (n<=39))
    printf(" Your Grade is D");
    
    else
    printf(" You have failed ");
    return 0;
    
    }
