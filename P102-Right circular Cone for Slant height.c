/*Right circular Cone for Slant height */
/* Page: 475 */
/* Program: 102 */

#include <stdio.h>
#include <math.h>


int main(){
     float s,r,h;
     
     printf( "note: a = length; b = width; c = height; r = radius; h = height ");
     printf("\n\n Enter the value of r & h = ");
     scanf("%f %f",&r,&h);
     
     s = sqrt((h*h)+(r*r));
     
     
         
     printf(" Answer = %.2f",s);
     return 0;
    }
