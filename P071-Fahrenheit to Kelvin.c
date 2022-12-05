/* Fahrenheit to Kelvin */
/* Page: 474 */
/* Program: 71 */

#include <stdio.h>

int main(){
     
     float f,k;
     
     printf(" Enter the Value of f : ");
     scanf("%f",&f);
     
     
     k = 5*(f-32)/9+273.15;
    
     
     printf("%.2f",k);
     return 0;
     
    }
