/* Leap Year check */
/* Page: 485 */
/* Program: 139 */


#include <stdio.h>

int main(){
    
    int n;
    
    printf(" Enter : ");
    scanf("%d",&n);
            
    if((n%400 == 0) || (n%100 !=0) && (n%4==0))
    printf(" Leap Year");
    
    else
    printf(" Not Leap Year");
            
    
    return 0;
    
    }
