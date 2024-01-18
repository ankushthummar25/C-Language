#include<stdio.h>
int main()
{
	int i=0,n,b=1;
	
	printf("Enter the value:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		i++;
		
		b*=2;
		{
				printf("\n%d",b);
		
		}
	}
	
	return 0;
}

/*

	2
	4
	8
	16
	32
	64

*/


