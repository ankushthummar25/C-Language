#include<stdio.h>
int main()
{
	int n,k,i=0,j;
	
	printf("\n");
	
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
		
			printf(" \n ");
			i++;
	}while(i<=5);
	
	return 0;
}



/*

  * * * * * *
   * * * * *
    * * * *
     * * *
      * *
       *
	   
*/