/* Switch statement (switch, case, break & default) */
/* Page: 449 */
/* Program: 23 */


#include <stdio.h>

int main(){
    
    char ch;
    
    printf(" Enter a number (0-3): ");
    scanf("%c",&ch);
    
    switch(ch){
        
        case '0':
        printf("\n Zero.");
        break;
        
        case '1':
        printf("\n One.");
        break;
        
        case '2':
        printf("\n Two.");
        break;
        
        case '3':
        printf("\n Three.");
        break;
        
        default: //default is like else statement.
        
        printf("\n You do not enter 0-3 number.");
        
        
        }
    
    
    
    }
