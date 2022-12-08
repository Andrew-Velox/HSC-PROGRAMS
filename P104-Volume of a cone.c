/* Volume of a cone  */
/* Page: 478 */
/* Program: 104 */

#include <stdio.h>
#include <math.h>


int main(){
     float s,r,h,pi;
     pi = 3.14;
     
     printf( "\tnote: a = number; b = power; c = height; r = radius ");
     printf("\n\n Enter the value of r & h = ");
     scanf("%f %f",&r,&h);
     
     
     s = (pi *r*r*h)*1/3;
     
     
         
     printf(" Answer = %.2f",s);
     return 0;
    }
