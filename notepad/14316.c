#include<stdio.h>
int main()
{
    int a,n,b=0;

	printf("Enter the Value:");
	scanf("%d",&n);
	
	for(a=1;a<=n;a++)
	{
	   if(a%2==0)
	    {
	      printf("%d \n",a*a);
		}else
			{
			printf("%d \n",a);
			}
	}
    return 0;
}	

/*

Enter the Value :10  

1 
4 
3 
16 
5 
36 
7 
64 
9 
100 

*/
		  