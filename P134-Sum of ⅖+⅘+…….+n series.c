/* Sum of ⅖+⅘+…….+n/5 series */
/* Page: 483 */
/* Program: 134 */


#include <stdio.h>
#include <math.h>

int main(){
    float num,i,sum=0;
    
    printf(" Enter a num  = ");
    scanf("%f",&num);
    
    
    for(i = 2; i<=num; i = i+2){
        
    sum = sum+i/5;
    
    //printf("%f ",sum);
    
    }
    printf("\n Answere = %.2f",sum);
    
    return 0;
    
    }
