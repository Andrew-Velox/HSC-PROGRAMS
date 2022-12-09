/* Displaying the biggest number using Array */
/* Page: 469 */
/* Program: 59 */


// I solved this program by watching YT video by Anisul Islam sir.That was easy for me to understand.

#include <stdio.h>

int main(){
    
    int num[10],n,i,max;
    
    printf(" How many Numbers? ");
    scanf("%d",&n);
    printf(" Enter the %d numbers = ",n);
    
    for(i=0;i<n;i=i+1){
        
        scanf("%d",&num[i]);
        }
    
    max = num[0];
    for(i=1;i<n;i=i+1){
        
        if( max < num[i])
        
        max = num[i];
        
        }
    
    printf(" Maximum = %d ",max);
        
    return 0;
    }
