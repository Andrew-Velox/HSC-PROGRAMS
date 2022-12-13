/* Multiplication table of a given number */
/* Page: 486 */
/* Program: 142*/


#include <stdio.h>

int main(){
    
    int n,i;
    
    printf("\t\tEnter a num : ");
    scanf("%d",&n);
    
    for(i=1;i<=10;i = i+1){
        
        printf("\n\t\t\t%d × %d = %d\n ",n,i,n*i);
        
        }
    return 0;
    
    }
