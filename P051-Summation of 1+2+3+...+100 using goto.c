/* sum of 1+2+3+..+100 using GOTO STATEMENT  */
/* Page: 462 */
/* Program: 51 */


#include <stdio.h>

int main(){
    
    int i =1,sum=0;
    
    start:
    
    sum = sum+i;
     i = i+1;
     
    if(i<=100)
    goto start;
    printf("%d ",sum);
    return 0;
    
    }
