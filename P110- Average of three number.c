/*  Compute the average of three integer number  */
/* Page: 477 */
/* Program: 110 */

#include <stdio.h>

int main(){
    
    int a,b,c;
    float sum,avg;
    
    printf (" Enter the value of a,b & c : ");
    scanf("%d %d %d",&a, &b, &c);
    
    sum = a + b + c;
    
    avg = sum / 3;
    
    
        
    printf(" Average : %.2f",avg);
    
    return 0;


    }    
