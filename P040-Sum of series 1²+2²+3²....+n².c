/* Displaying the sum of series 1²+2²+3²....n²  using for,while &do..while loop */
/* Page: 458 */
/* Program: 41 */


#include <stdio.h>

int main(){
  
   //*  // Using for Loop //
  
  int x,num,sum=0;
  
  printf(" Enter a number =  ");
  scanf("%d",&num);
  
  for(x=1; x<=num;x=x+1){
      
      
      sum= sum+x*x;
      
      }
      
  printf("%d ",sum);

  //*/
  
/*   // using while loop //
  
  int x,num,sum=0;
  x = 1;
  printf(" Enter a number =  ");
  scanf("%d",&num);
  
  while (x<=num){
      
      sum = sum +x*x;
      x = x+1;
      
      } 
  printf("%d",sum);
// */
  
  /* // using do...while loop//
   
  int x,num,sum;
  x = 1;
  sum = 0;
  
  printf(" Enter a number =  ");
  scanf("%d",&num);
  
    
  do{
      
      
      sum = sum + x*x;
      x = x+1;
      
      }while(x<=num); 
      printf("%d",sum);
*/
  return 0;
  
  
  
 }
