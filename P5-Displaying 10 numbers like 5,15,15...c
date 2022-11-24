/* Displaying 10 numbers like 5,10,15....using for,while &do..while loop */
/* Page: 455 */
/* Program: 35 */


#include <stdio.h>

int main(){
  
  /*  // Using for Loop //
  
  int a,x,num;
  a=5;
  printf(" Enter A Number:  ");
  scanf("%d",&num);
  
  for(x=1; x<=num;x=x+1){
      
      
      
  
      printf("%d \n",x*a);
     
      } 
      
      
      */
  
  
  
 /*   // using while loop //
  
  int x = 1,num,a;
  a=5;
  printf(" Enter A Number: ");
  scanf("%d",&num);
  
  while (x<=num){
      
      printf("%d \n",x*a);
      
      x = x+1;
      
      } 
  
  */
  
   // using do...while loop//
   
  int x = 1,num,a;
  a = 5;
  
  printf(" Enter A number: ");
  scanf("%d",&num);
  
  do{
      
      
      printf("%d \n",x*a);
      x = x+1;
      
      
      }while(x<=num); 
  
  return 0;
  
  
  
 }
