/* Sum of 1^n+2^n+2^n+…….+n^n series */
/* Page: 482 */
/* Program: 131 */


#include <stdio.h>
#include <math.h>
int main(){
    int tt,num,i,sum=0;
    
    printf(" Enter a num  = ");
    scanf("%d",&num);
    
    
    for(i = 1; i<=num; i = i+1){
        
    
    sum = sum+pow(i,num);
    //printf("%d ",sum);
    
    }
    printf("\n Answere = %d",sum);
    
    return 0;
    
    }
