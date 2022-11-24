/* Displaying the odd numbers from 1....n using for,while &do..while loop */
/* Page: 454 */
/* Program: 33 */


#include <stdio.h>

int main(){
  
  // Using for Loop //
  
  int x,num;
  
  printf(" Enter A Number: ");
  scanf("%d",&num);
  
  for(x = 1; x<=num;x+=2){
      
  
      printf("%d \n",x);
     
      } 
  
  
  
  
  /*   // using while loop //
  
  int x = 1,num;
  
  printf(" Enter A Number: ");
  scanf("%d",&num);
  
  while (x<=num){
      
      printf("%d \n",x);
      
      x = x+2;
      
      } */
  
  
  
  /*  // using do...while loop//
  int x = 1,num;
  
  printf(" Enter A number: ");
  scanf("%d",&num);
  
  do{
      
      
      printf("%d \n",x);
      x = x+2;
      
      
      }while(x<=num); */
  
  return 0;
  
  
  
 }
