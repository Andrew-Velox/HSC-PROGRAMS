/* Sum of 1*2+2*3+3*4+…….+n series */
/* Page: 482 */
/* Program: 127 */


#include <stdio.h>
#include <math.h>
int main(){
    int tt,num,i,sum=0;
    
    printf(" Enter a num  = ");
    scanf("%d",&num);
    
    
    for(i = 1; i<=num; i = i+1){
        
    
    sum = sum+ i*(i+1);
    //printf("%d ",sum);
    
    }
    printf("\n Answere = %d",sum);
    
    return 0;
    
    }
