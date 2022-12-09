/* GCD of two Numbers using for,while & do..while loop */
/* Page: 459 */
/* Program: 44 */


#include <stdio.h>

int main(){
    
    int n1,a,b,n2,tt;
    
    printf("Enter a number: ");
    scanf("%d %d",&n1,&n2);
    a = n1;
    b = n2;
    
    // For loop //
    
    for( ;b > 0; ){
        
        
        tt = a % b;
        a = b;
        b = tt;
        }
    
    
    
    // while loop //
    /*
    while(b != 0){
        
        tt = a % b;
        a = b;
        b = tt;                
        
        }
        
        */
        
     // do...while //
     /*
     do{
         
         tt = a%b;
         a = b;
         b = tt;
         
         
         }while(b != 0);
    */
    printf("\n GCD of %d & %d is = %d",n1,n2,a);
    
    
    return 0;
}
