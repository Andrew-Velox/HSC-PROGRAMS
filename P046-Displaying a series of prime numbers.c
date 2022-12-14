/* Displaying a series of prime numbers */
/* Page: 461 */
/* Program: 46 */

#include <stdio.h>
int main(){
    
    int i,sum,n;
    int prime;
    printf(" Enter the heighest range : ");
    scanf("%d",&n);
    printf(" Series of prime number upto %d is  = ",n);
    
    for(i = 2; i<=n; i = i+1){
        
        prime = 1;             // any number
        
        for(sum=2; sum<i; sum = sum +1)
        
        if(i%sum == 0){
            prime = 2;
            break;
        }
        if(prime == 1)
        printf("%d ",i);
        
        }

}
