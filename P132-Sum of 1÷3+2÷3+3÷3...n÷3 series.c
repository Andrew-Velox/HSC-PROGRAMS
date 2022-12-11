/* Sum of 1/3+2/3+3/3+…….+n^3 series */
/* Page: 482 */
/* Program: 132 */


#include <stdio.h>
#include <math.h>
int main(){
    float num,i,sum=0;
    
    printf(" Enter a num  = ");
    scanf("%f",&num);
    
    
    for(i = 1; i<=num; i = i+1){
        
    
    sum = sum+i/3;
    //printf("%f ",sum);
    
    }
    printf("\n Answere = %.2f",sum);
    
    return 0;
    
    }
