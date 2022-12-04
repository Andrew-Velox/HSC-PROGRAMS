/*  Summation of odd numbers from 1....100 number*/
/* Page: 480 */
/* Program: 116 */

#include <stdio.h>

int main(){
     int a=0,n,i;
     
     printf(" Enter value of n: ");
     scanf("%d", &n);
     
     for (i = 1; i <=n; i = i +2){
     
         a = a + i;                    
         
     }
     
     printf("Ans : %d",a);
     return 0;
    }
