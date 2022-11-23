/* Displaying the odd number from 1...n  */
/* Page: 452 */
/* Program: 30 */


#include <stdio.h>

int main(){
  
  
  
  int digit,n;
  digit = 1;
  
  
  printf(" Enter n; ");
  scanf("%d",&n);
  
  
  printf("\n The odd number is: ");
  
  
  while(digit <= n){
      
      
      if (digit % 2 != 0){
          
          
          printf("%d ",digit);
          
          }
      digit = digit + 1;
      
      }
  
  return 0;
  
  
  
  }
