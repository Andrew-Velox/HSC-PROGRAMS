/* Area of Triangle with 3 Sides Formula */
/* Page: 478 */
/* Program: 95 */

#include <stdio.h>
#include <math.h>


int main(){
     float s,a,b,c,t;
     
     printf( "\t\t\tnote: a = length; b = width; c = height");
     printf("\n\n Enter the value of a,b & c = ");
     scanf("%f %f %f",&a,&b,&c);
     
     s = (a+b+c)/2;
     t = sqrt(s*(s-a)*(s-b)*(s-c));
     
     
         
     printf(" Answer = %.2f",t);
     return 0;
    }
