/*  Sum of the Sequence 5+10+15+....+n */
/* Page: 481 */
/* Program: 120 */

#include <stdio.h>

int main(){
     int a=0,n,i;
     
     printf(" Enter value of n: ");
     scanf("%d", &n);
     
     for (i = 5; i <=n; i = i +5){
     
         a = a + i;                    
         
     }
     
     printf("Ans : %d",a);
     return 0;
    }
