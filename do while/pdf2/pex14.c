#include<stdio.h>
int main()
{
	int n,k,i=5,j;
	
	do
	{
		k=1;
			do
			{
					printf(" ");
					k++;
			}while(k<=i);
				j=1;
				do
				{
					printf("* ");
					j++;
				}while(j<=5-i+1);
		
			printf("\n");
			i--;
	}while(i>=1);
	
	return 0;
}



/*

     *
    * *
   * * *
  * * * *
 * * * * *
 
 */