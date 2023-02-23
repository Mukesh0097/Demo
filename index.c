#include<stdio.h>


int main(){
    
    //%d
    // *   * // *   *
    // *   *    * * *
    // * * *    *   *
    // *   *
    // *   *

    int n;
    scanf("%d",&n);
   
    for (int row = 1; row<=n ; row++)
    {
        for (int j = 1; j <= 3  ; j++)
        {   
            if (row == (n+1)/2)
            {
               if(j == 2){
                printf("*");
               }
            }
            if(j == 2){
                printf(" ");
            }else{
                printf("* ");
            }
            
        }
        printf("\n");
        
    }
    
}