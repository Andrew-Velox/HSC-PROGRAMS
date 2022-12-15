/* Multiplication of 1² × 2² × 3² × … × n² */
/* Page: 481 */
/* Program: 123 */

#include <stdio.h>
#include <math.h>
//for (pow) function we need to write #include <math.h>

int main(){
     int a=1,n,i;
     
     printf(" Enter value of n: ");
     scanf("%d", &n);
     
     for (i = 1; i <=n; i = i +1){
     
         a = a * pow(i,2);
         
     }
     
     printf("Ans : %d",a);
     return 0;
    }
