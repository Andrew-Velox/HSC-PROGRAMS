/* Power of an integer number  */
/* Page: 478 */
/* Program: 108 */

#include <stdio.h>
#include <math.h>


int main(){
     float s,r,a,b,c,pi;
     
     printf( "\tnote: a = number; b = power; c = height; r = radius ");
     printf("\n\n Enter the value of a & b= ");
     scanf("%f %f",&a,&b);
     
     
     s = pow(a,b);
     
     
         
     printf(" Answer = %.2f",s);
     return 0;
    }
