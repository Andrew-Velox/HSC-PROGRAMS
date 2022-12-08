/* Right circular cone Solve for surface area */
/* Page: 475 */
/* Program: 103 */

#include <stdio.h>
#include <math.h>


int main(){
     float s,r,h;
     
     printf( "note: a = length; b = width; c = height; r = radius; h = height ");
     printf("\n\n Enter the value of r & h = ");
     scanf("%f %f",&r,&h);
     
     s = (22/7)*r*sqrt(4*(h*h)-(r*r));
     
     
         
     printf(" Answer = %.2f",s);
     return 0;
    }
