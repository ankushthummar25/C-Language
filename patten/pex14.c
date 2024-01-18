#include<stdio.h>
int main()
{
	int n,k,i,f,j;
	
	 printf("enter the value : ");
	 scanf("%d", &n);
	 
		printf("\n");
	
	for(i=n; i>=1; i--)
	{
		
		for(j=1; j<=i; j++)
		{
			printf(" ");
		}
		
		for(k=n; k>=i; k--)
		{
			printf("* ");
		}
		
			printf("\n");
	}
	
	return 0;
}



/*

     *
    * *
   * * *
  * * * *
 * * * * *
 
 */