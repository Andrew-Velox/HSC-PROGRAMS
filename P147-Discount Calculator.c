/* Discount Calculate */
/* Page: 489 */
/* Program: 147 */


#include <stdio.h>

int main(){
    
    float amount,discount,price;
    
    
    printf(" Amount : ");
    scanf("%f",&amount);
    
    if (amount>=10000)
    discount = amount * 0.1;
    
    else if((amount>=5000) && (amount<10000))
    discount = amount * 0.05;
    
    
    else
    discount = amount*0 ;
    
    
    price = amount-discount;
    printf("\n Discount Price : %.2f",price);
    return 0;
    
    }
