/* Conditional statement (if) */
/* Page: 446 */
/* Program: 17 */

#include <stdio.h>

int main(){
    
    int age;
    
    printf(" What is Your Age: ");
    scanf("%d",&age);
    
    if (age<=12)
    printf("\n You are Child.");
    
    if (age>12 && age<=19)
    printf("\n You are Teen Ager.");
    
    if (age>19)
    printf("\n You are Older.");
    
    return 0;
    
    
    }
