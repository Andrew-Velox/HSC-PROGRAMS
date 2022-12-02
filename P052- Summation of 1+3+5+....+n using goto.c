/* summation of 1+3+5..+n using GOTO STATEMENT  */
/* Page: 463 */
/* Program: 52 */


#include <stdio.h>

int main(){
    
    int i,sum,n;
    sum = 0;
    i = 1;
    
    printf(" Enter a number : ");
    scanf("%d",&n);
    
    start:
    
    sum = sum + i;
   /* printf("%d ",sum); */
    i = i +2;
    
    
    while(i<=n)
    goto start;
   
    printf("Summation = %d",sum);
    return 0;
    
    }
