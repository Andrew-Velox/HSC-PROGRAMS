/* Finding the largest of three number */
/* Page: 487 */
/* Program: 143 */


#include <stdio.h>

int main(){
    
    int n1,n2,n3;
    
    printf("\tEnter three numbers : ");
    scanf("%d %d %d",&n1,&n2,&n3);
    
    if((n1>n2) && (n1>n3))
    printf("\n\t %d is the largest number",n1);
    
    else if((n2>n1) && (n2>n3))
    printf("\n\t %d is the largest number",n2);
    
    else
    printf("\n\t %d is the largest number",n3);
    return 0;
    
    }
