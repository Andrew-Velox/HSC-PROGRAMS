/* Displaying the sum of series 1+3+5....n  using for,while &do..while loop */
/* Page: 457 */
/* Program: 39 */


#include <stdio.h>

int main(){
  
   /*  // Using for Loop //
  
  int x,num,sum=0;
  
  printf(" Enter a number =  ");
  scanf("%d",&num);
  
  for(x=1; x<=num;x=x+2){
      
      
      sum = sum+x;
      
      }
      
  printf("%d ",sum);

  */
  
/*   // using while loop //
  
  int x,num,sum=0;
  x = 1;
  printf(" Enter a number =  ");
  scanf("%d",&num);
  
  while (x<=num){
      
      sum = sum +x;
      x = x+2;
      
      } 
  printf("%d",sum);
// */
  
  //* // using do...while loop//
   
  int x,num,sum;
  x = 1;
  sum = 0;
  
  printf(" Enter a number =  ");
  scanf("%d",&num);
  
    
  do{
      
      
      sum = sum + x;
      x = x+2;
      
      }while(x<=num); 
      printf("%d",sum);
//  */
  return 0;
  
  
  
 }
