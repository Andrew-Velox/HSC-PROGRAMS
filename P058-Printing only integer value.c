/* Continue statement  */
/* Page: 465 */
/* Program: 58 */

#include <stdio.h>

int main(){
    
    int n;
    
    for ( ; ; ){
        
        printf(" Enter a positive integer : ");
        scanf("%d",&n);        
        if (n<=0)
        continue;
        
        else               
        break;
        }
        
    printf(" You have entered : %d",n);
    
    return 0;
    }
