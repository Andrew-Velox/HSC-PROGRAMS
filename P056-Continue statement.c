/*  Uses of Continue statement  */
/* Page: 465 */
/* Program: 56 */

#include <stdio.h>

int main(){
    
    int n;
    
    for (n=10;n<=50;n=n+1){
        
        if (n == 15 || n == 25)
        
        continue;
        printf("%d  ",n);
    
        }
    
    
    return 0;
    
    }
