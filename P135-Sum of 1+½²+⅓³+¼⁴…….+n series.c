/* Sum of 1+½²+⅓³+¼⁴…….+n series */
/* Page: 483 */
/* Program: 135 */


#include <stdio.h>
#include <math.h>

int main(){
    float num,i,sum=0;
    
    printf(" Enter a num  = ");
    scanf("%f",&num);
    
    
    for(i = 1; i<=num; i = i+1){
        
    sum = sum+1/i*i;
    
    //printf("%f ",sum);
    
    }
    printf("\n Answere = %.2f",sum);
    
    return 0;
    
    }
