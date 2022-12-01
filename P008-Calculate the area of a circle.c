/* Calculate the area of a circle */
/* Page: 433 */
/* Program: 8 */

#include <stdio.h>

float pi = 3.18;

int main(){
    
    float radius,area;
    printf("What is the Radius (cm) : ");
    scanf("%f", &radius);
    area = (pi)*(radius*radius);
    printf("Area of the circle: %.2f square cm",area);
    return 0;
    
    }
