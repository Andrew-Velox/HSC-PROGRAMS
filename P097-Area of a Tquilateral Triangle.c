/*  Area of a Tquilateral Triangle */
/* Page: 478 */
/* Program: 97 */

#include <stdio.h>
#include <math.h>


int main(){
     float s,a,b,c;
     
     printf( "\t\t\tnote: a = length; b = width; c = height");
     printf("\n\n Enter the value of a= ");
     scanf("%f",&a);
     
     s = (sqrt(3)*a*a)/4;
     
     
         
     printf(" Answer = %.2f",s);
     return 0;
    }
