/* Sum of 2²+4²+6²+...+n² series  */
/* Page: 482 */
/* Program: 125 */


#include <stdio.h>
#include <math.h>
int main(){
    int num,i,sum=0;
   
    printf(" Enter a num ; ");
    scanf("%d",&num);
    
    
    for(i = 2; i<=num;i = i+2){
        
    
    sum =sum + i *i;
    //printf("%d ",sum);
    
    }
    printf("\n Answere = %d",sum);
    
    return 0;
    
    }
