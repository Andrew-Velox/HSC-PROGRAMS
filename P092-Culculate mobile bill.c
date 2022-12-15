/* Calculate mobile bill "/
/* Page: 476 */
/* Program: 92 */


#include <stdio.h>


int main() 
{
	int a,sum,b;
	
	printf(" Enter the A(gp-gp) & B(gp-other) value: ");
	
    scanf("%d %d",&a,&b);
    
    
    sum=a*0.35+b*1.25;
    
    printf(" Total Bill : %d",sum);
	
	return 0;

}
