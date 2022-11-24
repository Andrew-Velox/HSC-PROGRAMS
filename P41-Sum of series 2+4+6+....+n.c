/* Displaying the sum of series 2+4+6....n  using for,while &do..while loop */
/* Page: 457 */
/* Program: 40 */


#include <stdio.h>

int main(){
  
   /*  // Using for Loop //
  
  int x,num,sum=0;
  
  printf(" Enter a number =  ");
  scanf("%d",&num);
  
  for(x=2; x<=num;x=x+2){
      
      
      sum = sum+x;
      
      }
      
  printf("%d ",sum);

  */
  
/*   // using while loop //
  
  int x,num,sum=0;
  x = 2;
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
  x = 2;
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
