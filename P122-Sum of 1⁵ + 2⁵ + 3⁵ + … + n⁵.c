/* Sum of 1⁵ + 2⁵ + 3⁵ + … + n⁵ */
/* Page: 481 */
/* Program: 122 */

#include <stdio.h>
#include <math.h>     
//for (pow) function we need to write #include <math.h>

int main(){
     int a=0,n,i;
     
     printf(" Enter value of n: ");
     scanf("%d", &n);
     
     for (i = 1; i <=n; i = i +1){
     
         a = a + pow(i,5);   
         
     }
     
     printf("Ans : %d",a);
     return 0;
    }
