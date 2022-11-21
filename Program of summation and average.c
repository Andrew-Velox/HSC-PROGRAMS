/* Program of summation and average */
/* Page:422 */

#include<stdio.h>
int main(){
    
    int a,b,c,sum;
    float avg;
    printf(" Enter three integer Value: ");
    scanf("%d %d %d", &a,&b,&c);
    sum = a+b+c;
    avg = (float)sum/3;
    printf("\n The Sum of three number are=%d",sum);
    printf("\n Average of three number are=%.2f",avg);
    
    }
