/* Find the middle number between three number */
/* Page: 488 */
/* Program: 146 */


#include <stdio.h>

int main(){
    
    int n1,n2,n3;
    
    printf(" Enter three numbers : ");
    scanf("%d %d %d",&n1,&n2,&n3);
    
    
    if ((n1>n2) && (n1<n3) || (n1>n3) && (n1<n2))
    printf("Middle number : %d",n1);
    
    else if ((n2>n1) && (n2<n3) || (n2>n3) && (n2<n1))
    printf("Middle number : %d",n2);
    
    else
    printf("Middle number : %d",n3);
            
    
    
    return 0;
    
    }
