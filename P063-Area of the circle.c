/* Area of the circle */
/* Page: 473 */
/* Program: 63 */


#include <stdio.h>
int main(){
    
    float r,pi,area;
    
    pi = 3.14;
    
    printf(" Enter radius of the circle = ");
    scanf("%f",&r);
    
    area = pi*r*r;
    
    printf("\n Area = %.2f",area);
    return 0;
    
    
    }
