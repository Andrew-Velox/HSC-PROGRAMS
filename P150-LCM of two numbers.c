/* LCM of two numbers */
/* Page: 493 */
/* Program: 150 */

#include <stdio.h>
int main(){
    
    int n1,n2,sum,i,num1,num2,gcd,lcm,k;
    
    printf(" Enter the two number : ");
    scanf("%d %d",&n1,&n2);
    
    if(n1>n2)
    k=n1;
    else
    k=n2;
    
    up:
    if((k%n1 == 0) && (k%n2 == 0))
    printf(" The LCM of %d & %d is = %d",n1,n2,k);
    
    else{
        k = k+1;
        goto up;
    }
    
    // Another way //
    
    /*
    num1 = n1;
    num2 = n2;
    
    for(;num2>0;){
        
        
        sum = num1 % num2;
        num1 = num2;
        num2 = sum;
        
        }
    gcd = num1;
    lcm = (n1*n2)/gcd;
    printf(" The GCD is = %d",gcd);
    printf("\n And the LCM is = %d",lcm);
    */
    
    
    return 0;
}
