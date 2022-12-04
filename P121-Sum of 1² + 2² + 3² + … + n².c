/* Sum of 1² + 2² + 3² + … + n²*/
/* Page: 481 */
/* Program: 121 */

#include <stdio.h>

int main(){
     int a=0,n,i;
     
     printf(" Enter value of n: ");
     scanf("%d", &n);
     
     for (i = 1; i <=n; i = i +1){
     
         a = a + i*i;                    
         
     }
     
     printf("Ans : %d",a);
     return 0;
    }
