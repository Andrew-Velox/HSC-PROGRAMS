/* Area of Circle  */
/* Page: 478 */
/* Program: 105 */

#include <stdio.h>
#include <math.h>


int main(){
     float s,r,a,b,c,pi;
     
     pi = 3.1415;
     
     printf( "\tnote: a = length; b = width; c = height; r = radius ");
     printf("\n\n Enter the value of r = ");
     scanf("%f",&r);
     
     
     s = pi * r*r;
     
     
         
     printf(" Answer = %.2f",s);
     return 0;
    }
