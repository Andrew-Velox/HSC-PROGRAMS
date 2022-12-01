/* Conditional statement (if, || & else) */
/* Page: 448 */
/* Program: 21 */


#include <stdio.h>

int main(){
    
    char ch;
    
    printf(" Enter A Character: ");
    scanf("%c",&ch);
    
    if (ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
    
    
    printf("\n %c is a vowel.",ch);
    
    
    else
    
    printf("\n %c is a cosonant.",ch);
    
    return 0;
    
    
    
    
    }

