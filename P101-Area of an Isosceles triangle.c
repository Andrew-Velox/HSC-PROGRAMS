/* Area of an Isosceles triangle */
/* Page: 475 */
/* Program: 101 */

#include <stdio.h>
#include <math.h>


int main(){
     float s,a,b;
     
     printf( "\t\t\tnote: a = length; b = width; c = height");
     printf("\n\n Enter the value of a & b = ");
     scanf("%f %f",&a,&b);
     
     s = (b/4)*sqrt(4*(a*a)-(b*b));
     
     
         
     printf(" Answer = %.2f",s);
     return 0;
    }
