/* Calculate Commission and Gross Salary */
/* Page: 488 */
/* Program: 145 */


#include <stdio.h>

int main(){
    
    char name[30];
    float sale,comission,salary;
    
    printf(" Enter the name of Marketing esecuitive: ");
    scanf("%s",name);
    
    printf("\n Enter total sale : ");
    scanf("%f",&sale);
    
    if (sale>=50000)
    comission = sale / 10;
    
    else if((sale>=40000) && (sale<50000))
    comission = sale / 20;
    
    
    else
    comission = sale / 50;
    
    
    salary = 5000+comission;
    printf("\n Marketing execuitive name : %s",name);
    printf("\n Commission : %.0f",comission);
    printf("\n Gross salary : %.0f",salary);
    return 0;
    
    }
