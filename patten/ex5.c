#include<stdio.h>
int main()
{
	int i,a,n;
	printf("Enter the value :");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		for(a=1; a<=n; a++)
		{
			printf("  %d",i*2);
		}
		printf("\n");
	}
	
	return 0;
}


/*

2    2   2   2   2
4    4   4   4   4
6    6   6   6   6
8    8   8   8   8
10   10  10  10  10

*/