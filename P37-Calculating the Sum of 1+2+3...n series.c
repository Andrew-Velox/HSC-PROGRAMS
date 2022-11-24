/* Displaying the sum of 1+2+3....n using for,while &do..while loop */
/* Page: 456 */
/* Program: 37 */


#include <stdio.h>

int main(){
  
   /*  // Using for Loop //
  
  int x,num,sum=0;
  
  printf(" Enter last number: ");
  scanf("%d",&num);
  
  for(x=1; x<=num;x=x+1){
      
      
      sum = sum+x;
      
      }
      
  printf("%d ",sum);

  */
  
/*   // using while loop //
  
  int x,num,sum=0;
  x = 1;
  printf("Enter a number: ");
  scanf("%d",&num);
  while (x<=num){
      
      sum = sum +x;
      x = x+1;
      
      } 
  printf("%d",sum);
 */
  
  //* // using do...while loop//
   
  int x,num,sum;
  x = 1;
  sum = 0;
  
  printf(" Enter a Number: ");
  
  scanf("%d",&num);
  
    
  do{
      
      
      sum = sum + x;
      x = x+1;
      
      }while(x<=num); 
      printf("%d",sum);
  //*/
  return 0;
  
  
  
 }
