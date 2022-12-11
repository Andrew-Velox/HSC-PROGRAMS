/* Sum of 221+223+225+…….+n series */
/* Page: 482 */
/* Program: 128 */


#include <stdio.h>
//#include <math.h>
int main(){
    int tt,num,i,sum=0;
    
    printf(" Enter a num (grater then 221)  = ");
    scanf("%d",&num);
    
    
    for(i = 221 ; i<=num; i = i+2){
        
    
    sum = sum+i;
    //printf("%d ",sum);
    
    }
    printf("\n Answere = %d",sum);
    
    return 0;
    
    }
