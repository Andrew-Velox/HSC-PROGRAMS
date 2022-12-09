/* case & break statement */
/* Page: 464 */
/* Program: 55 */


#include <stdio.h>

int main(){
    
    int num;
    
    printf(" Enter a number = ");
    scanf("%d",&num);
    
    
    switch(num){
        
        case 1:
        printf(" You have enterd value 1");
        break;
        
        case 2:
        printf(" You have enterd value 2 ");
        break;
        
        case 3:
        printf(" You have enterd value 3 ");
        break;
        
        default:
        printf(" Input Value is not 1,2 or 3 ");
        
        }
    
    
    
        
    return 0;
    }
