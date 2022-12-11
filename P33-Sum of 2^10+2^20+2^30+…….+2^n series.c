/* Sum of 2^10+2^20+2^30+…….+2^n series */
/* Page: 483 */
/* Program: 133 */


#include <stdio.h>
#include <math.h>

int main(){
    int num,i,sum=0;
    
    printf(" Enter a num  = ");
    scanf("%d",&num);
    
    
    for(i = 10; i<=num; i = i+10){
        
    
    sum = sum+pow(2,i);
    //printf("%d ",sum);
    
    }
    printf("\n Answere = %d",sum);
    
    return 0;
    
    }
