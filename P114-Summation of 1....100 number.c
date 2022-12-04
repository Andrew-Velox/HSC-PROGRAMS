/*  Summation of 1....100 number*/
/* Page: 479 */
/* Program: 114 */

#include <stdio.h>

int main(){
     int a=0,n,i;
     
     //printf(" Enter value of n: ");
    //scanf("%d", &n);
     
     for (i = 1; i <=100; i = i +1){
     
         a = a + i;                    
         
     }
     
     printf("Ans : %d",a);
     return 0;
    }
