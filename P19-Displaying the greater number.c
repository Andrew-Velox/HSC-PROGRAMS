/* Conditional statement (if & else if) */
/* Page: 447 */
/* Program: 19 */

#include <stdio.h>

int main(){
    
    int x,y;
    
    printf(" Enter First Number: ");
    scanf("%d",&x);
    
    printf("\n Enter Second Number: ");
    
    scanf("%d",&y);
    
    if (x>y)
    printf("\n %d is greater then %d",x,y);
    
    else if(x<y)
    printf("\n %d is greater then %d",y,x);
    
    else
    printf("\n Both number is equal.");
    
    return 0;
    
    
    
    }
