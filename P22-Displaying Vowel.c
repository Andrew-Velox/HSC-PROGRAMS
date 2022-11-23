/* Switch statement (switch, case & break) */
/* Page: 448 */
/* Program: 22 */


#include <stdio.h>

int main(){
    
    char ch;
    
    printf(" Enter A Character: ");
    scanf("%c",&ch);
    
    //if (ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
    switch(ch){
        
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
    
        printf("\n %c is a vowel.",ch);
        
        break;
        default:
    
        printf("\n %c is a cosonant.",ch);
    
        //return 0;
        
        
        }
    
    
    
    
    }
