/*  Multiplication of 1....n numbers */
/* Page: 480 */
/* Program: 117 */

#include <stdio.h>

int main(){
     int a=1,n,i;
     
     printf(" Enter value of n: ");
     scanf("%d", &n);
     
     for (i = 1; i <=n; i = i +1){
     
         a = a * i;                    
         
     }
     
     printf("Ans : %d",a);
     return 0;
    }
