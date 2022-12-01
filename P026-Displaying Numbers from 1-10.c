/* Displaying Numbers from 1-10 */
/* Page: 451 */
/* Program: 26 */


#include <stdio.h>

int main(){
    /*
    int i;
    
    for (i=1;i<=10;i++)
    printf("%d ",i);
    */
    
    
    
    
    // using goto//
    
    int i = 1;
    start:
    
    printf("%d \n",i);
    i=i+1;
    
    
    if (i<=10)
    goto start;
    return 0;
    
    
    }
