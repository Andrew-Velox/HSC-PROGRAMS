/*  Summation of 1....n number*/
/* Page: 478 */
/* Program: 113 */

#include <stdio.h>

int main(){
     int a=0,n,i;
     
     printf(" Enter value of n: ");
     scanf("%d", &n);
     
     for (i = 1; i <=n; i = i +1){
     
         a = a + i;                    
         
     }
     
     printf("Ans : %d",a);
     return 0;
    }
