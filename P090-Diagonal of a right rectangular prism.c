/* Diagonal of a right rectangular prism */
/* Page: 478 */
/* Program: 90 */

#include <stdio.h>
#include <math.h>


int main(){
     float s,a,b,c;
     
     printf( "\t\t\tnote: a = length; b = width; c = height");
     printf("\n\n Enter the value of a,b & c= ");
     scanf("%f %f %f",&a,&b,&c);
     
     s = sqrt(a*a+b*b+c*c);
     
     
         
     printf(" Answer = %.2f",s);
     return 0;
    }
