#include<stdio.h>
int main()
{
	int i=0,n;
	
	printf("Enter the value:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		i++;
		
		if(i%2==1)
		{
				printf("\n%d",i);
		}else
			{
			printf("\n%d",i*i);
			}
	}
	
	return 0;
	
}


/*

	1
	4
	3
	16	
	5
	36

*/