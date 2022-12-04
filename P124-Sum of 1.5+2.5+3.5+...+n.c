/* Sum of 1.5+2.5+3.5+...+n  */
/* Page: 481 */
/* Program: 124 */

#include <stdio.h>
//#include <math.h>
//for (pow) function we need to write #include <math.h>

int main(){
     float a=0,n,i;
     
     printf(" Enter value of n: ");
     scanf("%f", &n);
     
     for (i = 1.5; i <=n; i = i +1){
         
                                             //printf("%.2f \n",i);
         a = a + i;
         
     }
     
     printf("Ans : %.2f",a);
     return 0;
    }
