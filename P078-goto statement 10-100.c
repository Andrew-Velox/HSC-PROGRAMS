/* GOTO STATEMENT  */
/* Page: 462 */
/* Program: 48 */


#include <stdio.h>

int main(){
    
    int i =10;
    
    start:
    
    printf("%d ",i);
    
    i = i+10;
    if (i<=100)
    goto start;
    
    return 0;
    
    }
