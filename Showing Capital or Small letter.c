/* Showing Capital or Small letter */
/* Page: 426 */

#include <stdio.h>
int main(){
    
    
    char ch;
    printf(" Enter The Character: ");
    scanf("%c",&ch);
    if((ch>='A') && (ch<='Z'))
    printf("\n You entered a capital letter: %c",ch);
    else if((ch>='a') && (ch<='z'))
    printf("\n You enterd a small letter: %c",ch);
    else
    printf("\n The letter you enterd is not a character.");
    return 0;
    
    }
