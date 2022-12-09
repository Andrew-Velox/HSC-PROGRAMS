/* LCM of two Numbers using for,while & do...while loop */
/* Page: 460 */
/* Program: 45 */


#include <stdio.h>

int main(){
    
    int n1,a,b,n2,tt,GCD,LCM;
    
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
    GCD = a;
    LCM =( n1 * n2)/GCD;
    printf("\n LCM of %d & %d is = %d",n1,n2,LCM);
    
    
    return 0;
}
