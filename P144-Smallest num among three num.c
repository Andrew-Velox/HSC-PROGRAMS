/* Find the smallest number among three number */
/* Page: 487 */
/* Program: 143 */


#include <stdio.h>


int main() 
{
	int n1,n2,n3;
	
	printf(" Enter three integer number : ");
    scanf("%d %d %d",&n1,&n2,&n3);
    
    
    if ((n1<n2) && (n1<n3))
    printf(" Smallest number : %d",n1);
    
    else if ((n2<n1) && (n2<n3))
    printf(" Smallest number : %d",n2);
    
    else
    printf(" Smallest number : %d",n3);
	
	return 0;

