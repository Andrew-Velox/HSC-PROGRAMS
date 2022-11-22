/* Format Specifier */
/* Page: 443 */
/* Program: 13 */

#include<stdio.h>

int main(){


    char ch;
    
    char str[100];
    
    int num;
    
    printf("Enter any character : \n\t");
    
    scanf("%c", &ch); // %c = single character
    
    printf("Entered character is: \t%c \n", ch);
    
    printf("Enter any string :\n\t");
    
    scanf("%s", &str ); // %s = string
    
    printf("Entered string is:\t %s\n", str);
    
    printf("Entere any number:\n\t", num);
    scanf("%d", &num);  // %d = integer
    printf("Entered number is:\t %d\n", num);
    
}
