/* Displaying Number from 1....n for,while &do..while loop */
/* Page: 453 */
/* Program: 31 */


#include <stdio.h>

int main(){
  /*
  int x,num;
  
  printf(" Enter A Number: ");
  scanf("%d",&num);
  
  for(x = 1; x<=num;x++){
      
  
      printf("%d \n",x);
      
      } */
  
  
  /*
  int x = 1,num;
  
  printf(" Enter A Number: ");
  scanf("%d",&num);
  
  while (x<=num){
      
      printf("%d \n",x);
      
      x = x+1;
      
      }
  */
  
  int x = 1,num;
  
  printf(" Enter A number: ");
  scanf("%d",&num);
  
  do{
      
      printf("%d \n",x);
      x = x+1;
      
      
      }while(x<=num);
  
  return 0;
  
  
  
 }
