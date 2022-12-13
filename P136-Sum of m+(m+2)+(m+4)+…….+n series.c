/* Sum of m+(m+2)+(m+4)+…….+n series */
/* Page: 483 */
/* Program: 136 */


#include <stdio.h>

int main(){
    
    int n=5,m=20,i;
             
    for(i = 2;i<=n; i = i+2){
        
    
    m = m+2*i;
    
    }
    printf(" Result = %d",m);
    
    return 0;
    
    }
