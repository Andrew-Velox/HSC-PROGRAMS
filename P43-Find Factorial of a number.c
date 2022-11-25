/* Find Factorial of an integer number using for,while &do..while loop */
/* Page: 459 */
/* Program: 43 */


#include <stdio.h>

int main(){
    /*  //Using for loop //
    
    int x,num,sum=1;
    
    printf(" Enter last number of the series: ");
    scanf("%d",&num);
    
    for (x=1;x<=num;x=x+1){
        
        
        sum = sum*x;
        
        }
    printf(" %d ",sum);
    */
    
    /* // Using while loop//
    int x=1,num,sum=1;
    printf(" Enter last number of the series: ");
    scanf("%d",&num);
    
    while(x<=num){
        //x= x+1;
        sum = sum*x;
        x=x+1;
        }
    printf("%d",sum);
    
    */
   //*  //using do....While loop//
    
    int x=1,num,fact=1;
    printf(" Enter an integer number;  ");
    scanf("%d",&num);
    
    do{
        //x= x+1;
        fact = fact*x;
        x=x+1;
        }while(x<=num);
    printf("%d",fact);
    //*/
    return 0;
    
    }
