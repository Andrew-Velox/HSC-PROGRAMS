/* Displaying a series of Fibonacci numbers */
/* Page: 491 */
/* Program: 149 */

#include <stdio.h>
int main(){
    
    int i,sum,n;
    int n1=0,n2=1;
    printf(" Enter  : ");
    scanf("%d",&n);
    printf(" First %d Fibonacci Numbers are = ",n);
    printf("%d %d ",n1,n2);
    
    for(i = 3; i<=n; i = i+1){
        
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;
        
        
        printf("%d ",sum);
        }

}
