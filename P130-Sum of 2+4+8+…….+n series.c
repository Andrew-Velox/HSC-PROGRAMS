/* Sum of 2+4+8+…….+n series */
/* Page: 482 */
/* Program: 131 */


#include <stdio.h>
#include <math.h>
int main(){
    int num,i,sum=0;
    
    printf(" Enter a num  = ");
    scanf("%d",&num);
    
    
    for(i = 1; i<=num; i = i+1){
        
    
    sum = sum+pow(2,i);
    //printf("%d ",sum);
    
    }
    printf("\n Answere = %d",sum);
    
    return 0;
    
    }
