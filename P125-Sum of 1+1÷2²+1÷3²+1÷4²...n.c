/* Sum of 1+1/2²+1/3²+1/4²+…….+1/n²   */
/* Page: 482 */
/* Program: 125 */


#include <stdio.h>
//#include <math.h>
int main(){
    float num,i,sum=0;
   
    printf(" Enter a num ; ");
    scanf("%f",&num);
    
    
    for(i = 1 ; i<=num; i = i+1){
        
    
    sum = sum +1/(i*i);
    //printf("%f ",sum);
    
    }
    printf("\n Answere = %.2f",sum);
    
    return 0;
    
    }
