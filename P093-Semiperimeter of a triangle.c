/* Semiperimeter of a triangle  */
/* Page: 478 */
/* Program: 93 */

#include <stdio.h>

int main(){
     float s,a,b,c;
     
     printf(" Enter the value of a,b & c = ");
     scanf("%f %f %f",&a,&b,&c);
     
     s = (a + b + c)*0.5;
     
     
         
     printf(" Answer = %.2f",s);
     return 0;
    }
