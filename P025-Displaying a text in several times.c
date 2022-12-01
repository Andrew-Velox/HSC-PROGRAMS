/* Displaying a text in several times */
/* Page: 450 */
/* Program: 25 */


#include <stdio.h>

int main(){
    
    
    int i,limit;
    
    char text[50];
    
    
    printf("\n Enter the Text: ");
    scanf("%[^\n]",text);
    
    
    printf("\n How many times? ");
    scanf("%d",&limit);
    
    
    for(i=1;i<=limit;i++)
    printf(" %s \n",text);
    
    
    
    }
