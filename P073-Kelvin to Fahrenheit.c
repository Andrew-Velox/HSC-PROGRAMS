/* Kelvin to Fahrenheit  */
/* Page: 474 */
/* Program: 73 */

#include <stdio.h>

int main(){
     
     float f,k;
     
     printf(" Enter the Value of k : ");
     scanf("%f",&k);
     
     
     f = 9*(k-273)/5+32;
    
     
     printf("%.2f",f);
     return 0;
     
    }
