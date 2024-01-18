#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	
	printf("Enter the Value : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		if(i%2!=0)
		{
			sum = sum+i;
		}
			i++;
	}
			printf("%d\n",sum);
	
	
	return 0;
}


/*

	25

*/