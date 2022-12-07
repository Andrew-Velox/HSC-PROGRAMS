/* Area of a Trapezoid  */
/* Page: 478 */
/* Program: 84 */

#include <stdio.h>

int main(){
     float s,a,b,t,c;
     
     printf(" Enter the value of a,b & c = ");
     scanf("%f %f %f",&a,&b,&c);
     t = a+b;
     s = 0.5*t*c;
     
     
         
     printf(" Answer = %.2f",s);
     return 0;
    }
