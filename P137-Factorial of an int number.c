/* Factorial of an integer number */
/* Page: 484 */
/* Program: 137 */


#include <stdio.h>

int main(){
    
    int sum=1,n,i;
    
    printf(" Enter an Integer number: ");
    scanf("%d",&n);
             
    for(i = 1;i<=n; i = i+1){
            
    
    sum = sum*i;
    
    }
    printf(" Result = %d",sum);
    
    return 0;
    
    }
