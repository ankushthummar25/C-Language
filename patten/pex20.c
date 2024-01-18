
#include <stdio.h>

int main()
{
    int i,j,a;

    for(i=0 ; i<=5 ; i++)
    {
        for(j=0 ; j<=i ; j++)
        {
            printf(" ");
        }
        for(a=5 ; a>=i ; a--)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    for(i=5 ; i>=0 ; i--)
    {
        for(j=0 ; j<=i ; j++)
        {
            printf(" ");
        }
        for(a=5 ; a>=i ; a--)
        {
            printf("* ");
        }
        printf("\n");
    }
    
     

    return 0;
}

/*

 * * * * * * 
  * * * * *  
   * * * *   
    * * *    
     * *     
      *      
      *      
     * *     
    * * *    
   * * * * 
  * * * * * 
 * * * * * * 

*/
