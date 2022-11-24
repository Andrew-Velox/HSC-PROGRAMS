/* Displaying the sum of 1+2+3....100  using for,while &do..while loop */
/* Page: 456 */
/* Program: 38 */


#include <stdio.h>

int main(){
  
//   /*  // Using for Loop //
  
  int x,sum=0;
  
  printf(" 1+2+3+.....+100 =  ");
  
  
  for(x=1; x<=100;x=x+1){
      
      
      sum = sum+x;
      
      }
      
  printf("%d ",sum);

  //*/
  
/*   // using while loop //
  
  int x,sum=0;
  x = 1;
  printf(" 1+2+3+....+100 =  ");
  
  while (x<=100){
      
      sum = sum +x;
      x = x+1;
      
      } 
  printf("%d",sum);
// */
  
  /* // using do...while loop//
   
  int x,num,sum;
  x = 1;
  sum = 0;
  
  printf(" 1+2+3+...+100 =  ");
  
  
    
  do{
      
      
      sum = sum + x;
      x = x+1;
      
      }while(x<=100); 
      printf("%d",sum);
  */
  return 0;
  
  
  
 }
