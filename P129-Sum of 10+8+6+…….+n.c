/* Sum of 10+8+6+…….+n series */
/* Page: 482 */
/* Program: 129 */


#include <stdio.h>
//#include <math.h>
int main(){
    int tt,num,i,sum=0;
    
    printf(" Enter a num under 10  = ");
    scanf("%d",&num);
    
    
    for(i = 10 ; i>=num; i = i-2){
        
    
    sum = sum+i;
    //printf("%d ",sum);
    
    }
    printf("\n Answere = %d",sum);
    
    return 0;
    
    }
