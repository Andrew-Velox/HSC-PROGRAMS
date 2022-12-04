/*  Summation of even numbers from 1....100 number*/
/* Page: 479 */
/* Program: 115 */

#include <stdio.h>

int main(){
     int a=0,n,i;
     
     printf(" Enter value of n: ");
     scanf("%d", &n);
     
     for (i = 2; i <=n; i = i +2){
     
         a = a + i;                    
         
     }
     
     printf("Ans : %d",a);
     return 0;
    }
