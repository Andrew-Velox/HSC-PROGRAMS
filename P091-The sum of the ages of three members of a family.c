/* The sum of the ages of three members of a family  */
/* Page: 476 */
/* Program: 91 */


#include <stdio.h>


int main() 
{
	int age,sum,mother,father;
	
	printf(" Enter son age : ");
    scanf("%d",&age);
    
    
    mother = age * 3;
    father = mother + 5;
    sum=age+mother+father;
    
    
    
    printf(" Father age : %d\n",father);
    printf(" Mother age : %d\n",mother);
    printf(" Son age : %d\n",age);
    printf(" Sum of there ages : %d",sum);
	
	return 0;

}
