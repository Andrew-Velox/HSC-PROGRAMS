/* Square root of a Number */
/* Page: 463 */
/* Program: 49 */


#include <stdio.h>
#include <math.h>

int main(){
    
    int n,sum;
    
    label:
    
    printf(" Enter a number : ");
    scanf("%d",&n);
    
        if(n>0)
        
        sum = sqrt(n);
        
    
    
    printf("\n Square root of %d is = %d \n\n",n,sum);
    
    goto label;
    return 0;
    }
