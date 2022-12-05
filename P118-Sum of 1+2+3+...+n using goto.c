/* Sum of 1+2+3+...+n  using goto */
/* Page: 481 */
/* Program: 118 */

#include <stdio.h>

int main(){
     
     int a=0,n,i;
     
     printf(" Enter a number : ");
     scanf("%d",&n);
     i = 1;
     start:
     a = a + i;
     
     i = i+1;
     if(i<=n)goto start;
     printf("%d",a);
     return 0;
     
    }
