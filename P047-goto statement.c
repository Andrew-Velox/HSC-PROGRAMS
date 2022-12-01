/* GOTO STATEMENT  */
/* Page: 462 */
/* Program: 47*/


#include <stdio.h>

int main(){
    
    printf(" Hello world");
    goto A;
    
    printf("goto statement");
    printf("this line will not print");
    
    A:
    printf("\n Hope You are fine.");
    return 0;
    }
