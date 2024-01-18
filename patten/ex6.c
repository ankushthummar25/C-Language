#include<stdio.h>
int main()
{
	int i,a,n;
	printf("Enter the value :");
	scanf("%d",&n);
	
	for(i=1; i<=10; i++)
	{
		for(a=1; a<=n; a++)
		{
			if(i%2==1)
			{
			printf("  %d",i);
			}
		}
		printf("\n");
	}
	
	return 0;
}


/*

1  1  1  1  1

3  3  3  3  3

5  5  5  5  5

7  7  7  7  7

9  9  9  9  9
  
*/