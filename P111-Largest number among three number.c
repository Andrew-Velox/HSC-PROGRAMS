/* largest number among three number */
/* Page: 476 */
/* Program: 111 */


#include <stdio.h>
int main(){
    
    int a,b,c;
    
    printf(" Enter  the value of a,b & c = ");
    scanf("%d %d %d",&a,&b,&c);
    
    if ((a>b) && (a>c))
    printf("%d",a);
    
    else if ((b>a) && (b>c))
    printf("%d",b);
    
    else
    printf("%d",c);
    
    return 0;
    
    
    }
